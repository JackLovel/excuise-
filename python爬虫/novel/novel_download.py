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

            #ipdb.set_trace()
            general_list = cate.find(style='display： block;')
            book_list = general_list.find_all('li')
            for book in book_list:
                link = "http://www.qu.la/" + book.a['href']
                title = book.a['title']
                url_list.append(link)
                with open(file_path, 'a') as f:
                    f.write("小说名： {:<} \t 小说地址： {:<} \n".format(title, link))

    return url_list


def get_txt_url(url):
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
        f.write('小说标题： {} \n'.format(txt_name))

    for url in lista:
        url_list.append('http://www.qu.la' + url.a['href'])

    return url_list, txt_name


def get_one_txt(url, txt_name):
    """
    获取小说每个章节的文本
    并写入到本地
    """
    html = get_html(url).replace('<br/>', '\n')
    soup = BeautifulSoup(html, 'html.parser')
    try:
        txt = soup.find('div', id='content').text.replace('chaptererror();', '')
        title = soup.find('title').text;

        with open('/home/w/Desktop/小说/{}.txt'.format(txt_name), "a") as f:
            f.write(title + '\n\n')
            f.write(txt)
            print('当前小说： {} 当前章节 {} 已经下载完毕'.format(txt_name, title))

    except:
        print('something error')

def get_all_txt(url_list):
    """
    下载排行榜里所有的小说
    并保存为txt格式
    """
    for url in url_list:
        # 使利获取当前小说的所有章节的目录
        page_list, txt_name = get_txt_url(url)
        for page_url in page_list:
            # 遍历每一人篇小说， 并下载到目录
            get_one_txt(page_url, txt_name)
            print('当前进度 {}%'.format(url_list.index(url) / len(url_list) * 100))


def main():
    # 排行榜地址
    base_url = "http://www.qu.la/paihangbang/"
    # 获取排行榜中所有小说的url连接
    url_list = get_content(base_url)
    get_all_txt(url_list)

main()