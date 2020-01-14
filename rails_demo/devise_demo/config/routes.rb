Rails.application.routes.draw do
  resources :lists

  devise_for :users
  root to: 'home#index'
  get 'about' => 'home#about'

  devise_scope :user do
    get 'sign_in', to: 'devise/sessions#new'
    get 'sign_up', to: 'devise/registrations#new'
    delete 'sign_out', to: 'devise/sessions#destroy'
    #get 'edit_password', to: ''
  end

  get  'mu' => 'admin#manage_user'
end
