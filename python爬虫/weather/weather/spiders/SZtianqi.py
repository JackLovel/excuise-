# -*- coding: utf-8 -*-
import scrapy
from weather.items import WeatherItem
from bs4 import BeautifulSoup
from ipdb import set_trace

class SztianqiSpider(scrapy.Spider):
    name = 'SZtianqi'
    allowed_domains = ['tianqi.com']
    # start_urls = ['http://suzhou.tianqi.com/']

    start_urls = []

    # 需要爬取的城市名称
    citys = ['nanjing', 'suzhou', 'shanghai']

    for city in citys:
        start_urls.append('http://' + city + '.tianqi.com')

    def parse(self, response):
        '''
        筛选信息的函数
        '''

        # 用来保存每天的信息
        items = []  
        data = response.body
        soup = BeautifulSoup(data, "html5lib")

        sixday = soup.find('div', class_ = "week")
        
        for day in sixday:
            item = WeatherItem()


            item['data'] = ""
            item['week'] = ""
            item['temperature'] = ''.join(tq)
            item['weather'] = ""
            item['wind'] = ""
            items.append(item)

        return items