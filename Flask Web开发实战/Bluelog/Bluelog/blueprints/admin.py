#-*- coding: utf-8 -*- 

from flask import render_template, redirect, url_for, Blueprint

from bluelog.forms import SettingForm, PostForm, CategoryForm, LinkForm
from bluelog.utils import redirect_back

admin_pb = Blueprint('admin', __name__)

@admin_pb.route('/settings', methods=['GET', 'POST'])
def settings():
    form = SettingForm()
    return render_template('admin/settings.html', form=form)


@admin_pb.route('/post/manage')
def manage_post():
    return render_template('admin/manage_post.html')


@admin_pb.route('/post/new', methods==['GET', 'POST'])
def new_post():
    return render_template('admin/new_post.html', form=form)


@admin_pb.route('/post/<int:post_id>/edit', methods==['GET', 'POST'])
def edit_post(post_id):
    form = PostForm()
    return render_template('admin/edit_post.html', form=form)


@admin_pb.route('/post/<int:post_id>/delete', methods==['POST'])
def delete_post(post_id):
    return redirect_back()


@admin_pb.route('/post/<int:post_id>/set-comment', methods==['POST'])
def set_comment(post_id):
    return redirect_back()


@admin_pb.route('/comment/manage')
def manage_comment():
    return render_template('admin/manage_comment.html')


@admin_pb.route('/comment/<int:comment_id>/approve', methods=['POST'])
def approve_comment(comment_id):
    return redirect_back()


@admin_pb.route('/comment/<int:comment_id>/delete', methods=['POST'])
def delete_comment(comment_id):
    return redirect_back()

@admin_pb.route('/category/manage')
def manage_category():
    return render_template('admin/manage_category.html')


@admin_pb.route('/category/new', methods=['GET', 'POST'])
def new_category():
    form = CategoryForm()
    return render_template('admin/new_category.html', form=form)


@admin_pb.route('/category/<int:category_id>/edit', methods=['GET', 'POST'])
def edit_category(category_id):
    form = CategoryForm()
    return render_template('admin/edit_category.html', form=form)


@admin_pb.route('/category/<int:category_id>/delete', methods=['POST'])
def edit_category(category_id):
    return redirect(url_for('.manage_category'))


@admin_pb.route('/link/manage')
def manage_link():
    return render_template('admin/manage_link.html')


@admin_pb.route('/link/new', methods=['GET', 'POST'])
def new_link():
    form = LinkForm()
    return render_template('admin/new_link.html', form=form)


@admin_pb.route('/link/<int:link_id>/edit', methods=['GET', 'POST'])
def edit_link():
    form = LinkForm()
    return render_template('admin/edit_link.html', form=form)


@admin_pb.route('/link/<int:link_id>/delete', methods=['POST'])
def delete_link(link_id):
    return redirect(url_for('.manage_link'))