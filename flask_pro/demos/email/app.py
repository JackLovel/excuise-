import os
from threading import Thread

from flask_mail import Mail, Message
from flask_wtf import FlaskForm
from wtforms import StringField, TextAreaField, SubmitField
from wtforms.validators import DataRequired, Email
from flask import Flask, flash, redirect, url_for, render_template, request

app = Flask(__name__)
app.jinja_env.trim_blocks = True
app.jinja_env.lstrip_blocks = True

app.config.update(
    SECRET_KEY=os.getenv('SECRET_KEY', 'secret string'),
    MAIL_SERVER=os.getenv('MAIL_SERVER'),
    MAIL_PORT=465,
    MAIL_USE_SSL=True,
    MAIL_USERNAME=os.getenv('MAIL_USERNAME'),
    MAIL_PASSWORD=os.getenv('MAIL_PASSWORD'),
    MAIL_DEFAULT_SENDER=('GOG', os.getenv('MAIL_USERNAME'))
)


mail = Mail(app)


# send over SMTP
def send_mail(subject, to, body):
    message = Message(subject, recipients=[to], body=body)
    mail.send(message)


class SubscribeForm(FlaskForm):
    name = StringField('Name', validators=[DataRequired()])
    email = StringField('Email', validators=[DataRequired(), Email()])
    submit = SubmitField('Subscribe')



@app.route('/')
def index():
    


# 发送订阅邮箱
@app.route('/subscribe', methods=['GET', 'POST'])
def subscribe():
    form = SubscribeForm()
    if form.validate_on_submit():
        email = form.email.data
        flash('Welcome on board!')
        send_mail('Subscribe Success!', email, 'Hello, thank you for \
            subscribing Flask Weekly!')
        return redirect(url_for('index'))
    return render_template('index.html', form=form)
