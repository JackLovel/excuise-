import os
import sys
import click
from flask import Flask
from flask import redirect, url_for, abort, render_template, flash
from flask_sqlalchemy import SQLAlchemy
from flask_wtf import FlaskForm
from forms import NewNoteForm, EditNoteForm, DeleteNoteForm
from flask_migrate import Migrate

# SQLite URI compatible
WIN = sys.platform.startswith('win')
if WIN:
    prefix = 'sqlite:///'
else:
    prefix = 'sqlite:////'


app = Flask(__name__)
app.jinja_env.trim_blocks = True
app.jinja_env.lstrip_blocks = True


app.config['SECRET_KEY'] = os.getenv('SECRET_KEY', 'secret string')


app.config['SQLALCHEMY_DATABASE_URI'] = os.getenv('DATABASE_URL', prefix + os.path.join(app.root_path, 'data.db'))
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False


db = SQLAlchemy(app)
migrate = Migrate(app, db)

# flask initdb --drop: 删除数据库和表，并重新创建 
@app.cli.command()
@click.option('--drop', is_flag=True, help='Create after drop.')
def initdb(drop):
    """Initiaize the database"""
    if drop:
        click.confirm('This operation will delete the database, \
        do you want to continue?', abort=True)
        db.drop_all()
        click.echo('Drop tables.')
    db.create_all()
    click.echo('Initialized database.')


# 注册shell上下文处理
@app.shell_context_processor
def make_shell_context():
    return dict(db=db, Note=Note, Author=Author, 
        Article=Article, Writer=Writer, Book=Book, 
        Citizen=Citizen, City=City, Country=Country,
        Draft=Draft
    )


@app.route('/')
def index():
    form = DeleteNoteForm()
    notes = Note.query.all()
    return render_template('index.html', notes=notes, form=form)


@app.route('/new', methods=['GET', 'POST'])
def new_note():
    form = NewNoteForm()
    if form.validate_on_submit():
        body = form.body.data
        note = Note(body=body)
        db.session.add(note)
        db.session.commit()
        flash('Your note is saved.')
        return redirect(url_for('index'))
    return render_template('new_post.html', form=form)


@app.route('/edit/<int:note_id>', methods=['GET', 'POST'])
def edit_note(note_id):
    form = EditNoteForm()
    note = Note.query.get(note_id)
    if form.validate_on_submit():
        note.body = form.body.data
        db.session.commit()
        flash('Your note is updated.')
        return redirect(url_for('index'))
    form.body.data = note.body # 原有值 
    return render_template('edit_note.html', form=form)


@app.route('/delete/<int:note_id>', methods=['POST'])
def delete_note(note_id):
    form = DeleteNoteForm()
    if form.validate_on_submit():
        note = Note.query.get(note_id)
        db.session.delete(note)
        db.session.commit()
        flash('Your note is deleted.')
    else:
        abort(400)
    return redirect(url_for('index'))


class Note(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    body = db.Column(db.Text)

    # optional
    def __repr__(self):
        return '<Note %r>' % self.body


class Author(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(70), index=True)
    phone = db.Column(db.String(20))
    articles = db.relationship('Article')

    def __repr__(self):
        return '<Author %r>' % self.name


class Article(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    title = db.Column(db.String(50), index=True)
    body = db.Column(db.Text)
    author_id = db.Column(db.Integer, db.ForeignKey('author.id'))
  
    def __repr__(self):
        return '<Article %r>' % self.title


class Writer(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(70), unique=True)
    books = db.relationship('Book', back_populates='writer')


class Book(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(50), index=True)
    writer_id = db.Column(db.Integer, db.ForeignKey('writer.id'))    
    writer = db.relationship('Writer', back_populates='books')


class Singer(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(50), index=True)
    songs = db.relationship('Song', backref='singer')    


class Song(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(50), index=True)
    singer_id = db.Column(db.Integer, db.ForeignKey('singer.id')) 


class Citizen(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(50), index=True)
    city_id = db.Column(db.Integer, db.ForeignKey('city.id')) #根据 city_id 存储
    city = db.relationship('City')    


class City(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(30), unique=True)   


class Country(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(50), unique=True)
    city = db.relationship('Capital', uselist=False)    


class Capital(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(30), unique=True)
    country_id = db.Column(db.Integer, db.ForeignKey('country.id')) #根据 city_id 存储
    country = db.relationship('Country')    


# 关联表：用来存放 Student 和 Teacher 模型的外键 
association_table = db.Table('association', 
    db.Column('student_id', db.Integer, db.ForeignKey('student.id')), 
    db.Column('teacher_id', db.Integer, db.ForeignKey('teacher.id'))
)


class Student(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(70), unique=True)
    grade = db.Column(db.String(20))
    teachers = db.relationship('Teacher', 
        secondary=association_table,
        back_populates='students')  

    def __repr__(self):
        return '<Student %r>' % self.name


class Teacher(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(70), unique=True)
    office = db.Column(db.String(20))
    students = db.relationship('Student',
                                secondary=association_table,
                                back_populates='teachers')
    def __repr__(self):
        return '<Teacher %r>' % self.name


class Post(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    title = db.Column(db.String(50), unique=True)
    body = db.Column(db.Text)
    comments = db.relationship('Comment', back_populates='post',
        cascade='all, delete-orphan') 


class Comment(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    body = db.Column(db.Text)
    post_id = db.Column(db.Integer, db.ForeignKey('post.id')) #根据 city_id 存储
    post = db.relationship('Post', back_populates='comments') 


class Draft(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    body = db.Column(db.Text)
    edit_time = db.Column(db.Integer, default=0)


# set 事件监听函数
# @db.event.listens_for(Draft.body, 'set')
# def increment_edit_time(target, value, oldvalue, initiator):
#     if target.edit_time is not None:
#         target.edit_time += 1

@db.event.listens_for(Draft.body, 'set', named=True)
def increment_edit_time(**kwargs):
    if  kwargs['target'].edit_time is not None:
        kwargs['target'].edit_time += 1