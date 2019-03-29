#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import requests
from bs4 import BeautifulSoup
from ipdb import set_trace


def get_agent():
    """
    模拟 header 的 user-agent 字段
    """
    agents = ['Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML,'
              'like Gecko) Chrome/70.0.3538.77 Safari/537.36']

    fakeheader = {}
    fakeheader['User-agent'] = agents[0]

    return fakeheader


def get_html(url):
    try:
        r = requests.get(url, headers=get_agent())
        r.raise_for_status
        r.encoding = r.apparent_encoding
        return r.text
    except:
        print('something error')


def main():
    url = 'https://www.zhihu.com/'
    print(get_html(url))


main()