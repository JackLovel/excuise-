#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import requests
import os 
from bs4 import BeautifulSoup 
import ipdb

def get_html(url):
    try:
        r = requests.get(url) 
        r.raise_for_status
        r.encoding = 'utf-8'
        return r.text
    except:
        return "wrong"

def get_content(url):
    url_list = []
    html = get_html(url)
    soup = BeautifulSoup(html, 'html.parser')

    category_list = soup.find_all('div',
                                  class_='index_toplist mright mbottom')
    history_finished_list = soup.find_all('div',
                                          class_='index_toplist mbottom')

    #ipdb.set_trace()
    file_dir = "/home/w/Documents/CodePro/excuise-/python爬虫/novel"
    file_path = os.path.join(file_dir, '小说.csv')
    for cate in category_list:
        name = cate.find('div', class_='toptab').span.string
        with open(file_path, 'a+') as f:
            f.write("\n 小说种类： {} \n".format(name))

    general_list = cate.find(style='display: block;')
    book_list = general_list.find_all('li')

    for book in book_list:
        link = 'http://www.qu.la/' + book.a['href']
        title = book.a['title']
        url_list.append(link)

        with open(file_path, 'a') as f:
            f.write("小说名: {:<} \t 小说地址： {:<}".format(title, link))


    for cate in history_finished_list:
        name = cate.find('div', class_='toptab').span.string
        with open(file_path, 'a') as f:
            f.write("\n小说种类： {} \n".format(name))

            general_list = cate.find(style='display： block;')
            book_list = general_list.find('li')
            for book in book_list:
                link = "http://www.qu.la/" + book.a['href']
                title = book.a['title']
                url_list.append(link)
                with open(file_path, 'a') as f:
                    f.write("小说名： {:<} \t 小说地址： {:<} \n".format(title, link))

    return url_list


def get_text_url(url):
    """
    获取该小说每个章节的地址
    并创建小说资料
    """
    url_list = []
    html = get_html(url)
    soup = BeautifulSoup(html, 'html.parser')
    lista = soup.find_all('dd')
    txt_name = soup.find('h1').txt
    text_name = "/home/w/Desktop/小说/{}.txt".format(txt_name)
    with open(text_name, "a+") as f:
        f.write('小说标题： {}')

def main():
    url = "http://www.qu.la/paihangbang/"
    get_content(url)
    

main()