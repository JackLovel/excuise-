# -*- coding: utf-8 -*-
import scrapy


# 将我们需要的项目入进来
from zimuku.items import ZimukuItem


class DemoSpider(scrapy.Spider):

    name = 'demo'
    allowed_domains = ['zimuku.net']
    start_urls = ['http://zimuku.net/']

    def parse(self, response):
        name = response.xpath('//b/text()').extract()[1]

        items = {}
        items['第一个'] = name
        return items
