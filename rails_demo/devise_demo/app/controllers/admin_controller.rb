class AdminController < ApplicationController
  # 只有关于页面才需要登录
  def manage_user
    @users = User.all
  end
end