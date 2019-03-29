#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import requests
from bs4 import BeautifulSoup
from ipdb import set_trace

def get_html(url):
    try:
        r = requests.get(url, timeout=30)
        r.raise_for_status
        r.encoding = 'utf-8'
        return r.text
    except:
        return "some error"


def get_one_area(url, area):
    comments = []
    html = get_html(url)
    soup = BeautifulSoup(html, 'html.parser')

    #set_trace()
    area_page = soup.find('a', attrs={'data-area': area}).text

    items = soup.find_all('li', attrs={'vitem J_li_toggle_date'})
    for item in items:
        comment = {}
        #set_trace()
        comment['分数'] = item.find('h3').text.strip()
        comment['排名'] = item.find('div', attrs={'class': 'top_num'}).text.strip()
        comment['名字'] = item.find('a', attrs={'class': 'mvname'}).text.strip()
        comment['发布时间'] = item.find('p', attrs={'class': 'c9'}).text.strip()
        comment['作者'] = item.find('a', attrs={'class': 'special'}).text.strip()

        comments.append(comment)

    print(area_page)
    for i in comments:
        print(i)


def get_area(url):
    areas = ['ALL', 'ML', 'HT', 'US', 'KR', 'JP']

    for area in areas:
        page_url = url + area
        get_one_area(page_url, area)


def main():
    url = "http://vchart.yinyuetai.com/vchart/trends?area="
    get_area(url)


main()
