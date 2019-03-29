# -*- coding: utf-8 -*-

BOT_NAME = 'zimuku'

SPIDER_MODULES = ['zimuku.spiders']
NEWSPIDER_MODULE = 'zimuku.spiders'
ROBOTSTXT_OBEY = True
ITEM_PIPELINES = {'zimuku.pipelines.ZimukuPipeline': 300}
