import os
from urllib.parse import urlparse, urljoin
from flask import Flask, request, redirect, \
    url_for, abort, make_response, jsonify, \
    request, session
from jinja2.utils import generate_lorem_ipsum

app = Flask(__name__)
app.secret_key = os.getenv('SECRET_KEY', 'no secret key')


@app.route('/404')
def not_found():
    abort(404)


@app.route('/hi')
def hi():
    return redirect(url_for('hello'))


@app.route('/')
@app.route('/hello')
def hello():
    name = request.args.get('name')
    if name is None:
        name = request.cookies.get('name', 'Human')
        response = '<h1>Hello, %s!</h1>' % name
    if 'logged_in' in session: 
        response += '[Authenitcated]'
    else:
        response += '[Not Authenitcated]'    
    return response


@app.route('/foo')
def foo():
    return '<h1>Foo page</h1><a href="%s">Do something and redirect</a>' % \
        url_for('do_someting', next=request.full_path)


@app.route('/bar')
def bar():
    return '<h1>Bar page</h1><a href="%s">Do something</a>' % \
        url_for('do_someting')


@app.route('/do_someting')
def do_someting():
    # 重定向到之前的页面
    return redirect(request.args.get('next'), url_for('hello')) 
    

def redirect_back(default='hello', **kwargs):
    for target in request.args.get('next'), request.referrer:
        if target:
            return redirect(target)
    return redirect(url_for(default, **kwargs))


@app.route('/do_something_and_redirect')
def do_something():
    return redirect_back()

@app.route('/foo1')
def foo1():
    return jsonify(name='Grey Li', gender='male')


@app.route('/set/<name>')
def set_cookie(name):
    response = make_response(redirect(url_for('hello')))
    response.set_cookie('name', name)
    return response


@app.route('/login')
def login():
    session['logged_in'] = True
    return redirect(url_for('hello'))


@app.route('/admin')
def admin():
    if 'logged_in' not in session:
        abort(403)
    return 'Welcome to admin page.'


@app.route('/logout')
def logout():
    if 'logged_in' in session:
        session.pop('logged_in')
    return redirect(url_for('hello'))

def is_safe_url(target):
    ref_url = urlparse(request.host_url)
    test_url = urlparse(urljoin(request.host_url, target))
    return test_url.scheme in ('http', 'https') and \
        ref_url.netloc == test_url.netloc

# AJAX
@app.route('/post')
def show_post():
    post_body = generate_lorem_ipsum(n=2)
    return '''
<h1>A very long post</h1>
<div class="body">%s</div>
<button id="load">Load More</button>
<script src="https://code.jquery.com/jquery-3.3.1.min.js"></script>
<script type="text/javascript">
$(function() {
    $('#load').click(function() {
        $.ajax({
            url: '/more',
            type: 'get',
            success: function(data){
                $('.body').append(data);
            }
        })
    })
})
</script>''' % post_body