class ApplicationController < ActionController::Base
  protect_from_forgery with: :exception

  protected
  
  def authenticate_admin
    unless current_user.admin?
      redirect_to root_path
    end
  end
end
