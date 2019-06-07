import click
from flask import Flask

app = Flask(__name__)

@app.route('/')
def index():
    return '<h1>Hello Flask!</h1>'

@app.route('/greet/<name>')
def greet(name):
    return '<h1>Hello {}!</h1>'.format(name) 

# 注册 自定义 flask 命令
@app.cli.command()
def hello():
    click.echo('Hello, Human!')