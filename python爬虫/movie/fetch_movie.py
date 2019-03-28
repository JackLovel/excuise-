#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import ipdb
import requests
from bs4 import BeautifulSoup


def get_html(url):
    try:
        r = requests.get(url)
        r.raise_for_status()
        r.encoding = 'gbk'
        return r.text
    except:
        print('something error')


def get_content(url):
    html = get_html(url)
    soup = BeautifulSoup(html, 'html.parser')

    moves_list = soup.find('ul', class_='picList clearfix')
    movies = moves_list.find_all('li')

    #ipdb.set_trace()
    for top in movies:
        img_url = top.find('img')['src'][2:]

        name = top.find('span', class_='sTit').a.text
        try:
            time = top.find('span', class_='sIntro').text
        except:
            time = "暂无上映时间"

        actors = top.find('p', class_='pActor')
        actor = ''

        for act in actors.contents:
            actor = actor + act.string + ' '

        intro = top.find('p', class_='pTxt pIntroShow').text
        print('片名： {}\t{}\n{}\n{} \n\n'.format(name, time, actor, intro))

        if not img_url.startswith('http://'):
            img_url = 'http://' + img_url

        path = '/home/w/Desktop/小说/'
        #ipdb.set_trace()
        with open(path + name + '.png', 'wb+') as f:
            f.write(requests.get(img_url).content)


def main():
    url = 'http://dianying.2345.com/top/'
    get_content(url)


main()
