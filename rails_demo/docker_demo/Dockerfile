## -*- docker-image-name: "rails_app" -*- 

# archlinux os
FROM ruby:2.6.5

# update package
RUN pacman -Sy --noconfirm

# install some depent package
RUN pacman -S --noconfirm nodejs sqlite vim

# rails 程序放的目录 
ENV APP_HOME /var/www/railsapp

# 创建 rails 程序目录和程序所需要的pids 的目录
RUN mkdir -p $APP_HOME

# 设置容器里的工作目录
WORKDIR $RAILS_ROOT

# 备份Gemfile 及 lock 到容器的工作目录中
COPY GemFile $APP_HOME
COPY GemFile.lock $APP_HOME

# 安装 rails 环境
RUN gem install bundler 
RUN bundle install 

# 将 Dockerfile 目录下的所有内容复制到容器工作目录
COPY . $APP_HOME

# 对 静态资源进行 编译
#RUN bundle exec rake RAILS_ENV=$RAILS_ENV assets:precompile
RUN bundle exec rake assets:precompile RAILS_ENV=production

# 开放 3000 端口
EXPOSE 8080 

# 当容器启动时运行的脚本 
CMD ["bundle", "exec", "puma", "-C", "config/puma_docker.rb"]
