from flask_wtf import FlaskForm
from flask import request, session, flash, redirect, url_for
from flask_wtf.file import FileField, FileRequired, FileAllowed
from flask_wtf.csrf import validate_csrf
from wtforms import StringField, PasswordField, BooleanField, \
    SubmitField, IntegerField, ValidationError, MultipleFileField, TextAreaField
from wtforms.validators import DataRequired, Length, ValidationError, Email
from flask_ckeditor import CKEditorField

class LoginForm(FlaskForm):
    username = StringField('用户名', validators=[DataRequired()])
    password = PasswordField('密码', validators=[DataRequired(), Length(8, 128)])
    remember = BooleanField('记住我')
    submit = SubmitField('登录')
   
# 行内验证器
class FortyTwoForm(FlaskForm):
    answer = IntegerField('The Number')
    submit = SubmitField()

    def validate_answer(form, field):
        if field.data != 42:
            raise ValidationError('Must be 42.')

def is_42(message=None):
    if message is None:
        message = "Must be 42."
    
    def _is_42(form, field):
        if field.data != 42:
            raise ValidationError(message)
    return _is_42


# 上传表单 
class UploadForm(FlaskForm):
    photo = FileField('Upload Image', validators=[FileRequired(), FileAllowed(['jpg',
        'jpeg', 'png', 'gif'])])
    submit = SubmitField()

# 多文件上传
class MultiUploadForm(FlaskForm):
    photo = MultipleFileField('Upload Image', validators=[DataRequired()])
    submit = SubmitField()


# 富文本
class RichTextForm(FlaskForm):
    title = StringField('Title', validators=[DataRequired(), Length(1, 50)])
    body = CKEditorField('Body', validators=[DataRequired()])
    submit = SubmitField('Publish')

class NewPostForm(FlaskForm):
    title = StringField('Title', validators=[DataRequired(), Length(1, 50)])
    body =  TextAreaField('Body', validators=[DataRequired()])
    save = SubmitField('Save') # 保存按钮
    publish = SubmitField('Publish') #　发布按钮

class SigninForm(FlaskForm):
    username = StringField('Username', validators=[DataRequired(), Length(1, 20)])
    password = PasswordField('Password', validators=[DataRequired(), Length(8, 128)])
    submit1 = SubmitField('Sign in')

class RegisterForm(FlaskForm):
    username = StringField('Username', validators=[DataRequired(), Length(1, 20)])
    email = StringField('Email', validators=[DataRequired(), Email(), Length(1, 254)])
    password = PasswordField('Password', validators=[DataRequired(), Length(8, 128)])
    submit2 = SubmitField('Register')

class SigninForm2(FlaskForm):
    username = StringField('Username', validators=[DataRequired(), Length(1, 20)])
    password = PasswordField('Password', validators=[DataRequired(), Length(8, 128)])
    submit1 = SubmitField()

class RegisterForm2(FlaskForm):
    username = StringField('Username', validators=[DataRequired(), Length(1, 20)])
    email = StringField('Email', validators=[DataRequired(), Email(), Length(1, 254)])
    password = PasswordField('Password', validators=[DataRequired(), Length(8, 128)])
    submit = SubmitField()