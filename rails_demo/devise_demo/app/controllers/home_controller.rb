# coding: utf-8
class HomeController < ApplicationController
  # 只有关于页面才需要登录
  before_action :authenticate_user!, only: [:about] 
  
  def index
  end

  def about
  end
end
