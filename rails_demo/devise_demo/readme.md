## devide 
- 添加 gem
```
gem 'devise', '~> 4.2'

$ bundle install  # 安装 
```

- 配置
```
$ rails g devise:install
$ rails g devise:views
$ rails g devise user # create user model
$ rails db:migrate
```

## 参考
- [Devise in rails](https://wdi-sg.github.io/gitbook-2019/06-ruby-rails/rails-security/devise.html)
- [Adding Authentication with Devise](https://guides.railsgirls.com/devise)
