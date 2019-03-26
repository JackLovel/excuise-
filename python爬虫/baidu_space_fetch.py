#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import requests
from bs4 import BeautifulSoup
from ipdb import set_trace


def get_html(url):
    try:
        r = requests.get(url, timeout=30)
        r.raise_for_status()
        r.encoding = 'utf-8'
        return r.text
    except:
        return "Error"

def get_content(url):
    comments = []
    
    html = get_html(url) 
    soup = BeautifulSoup(html, 'html.parser')

    liTags = soup.find_all('li', attrs={'class': 'j_thread_list clearfix'})

    for li in liTags:
        comment = {}
        try:
            comment['title'] = li.find('a', attrs={'class': 'j_th_tit'}).text.strip()
            comment['link'] = "http://tieba.baidu.com/" + \
                              li.find('a', attrs={'class': 'j_th_tit'})['href']
            comment['name'] = li.find('span', attrs={'class': 'tb_icon_author'}).text.strip()
            comment['time'] = li.find('span', attrs={'class': 'pull-right is_show_create_time'}).text.strip()
            comment['replyNum'] = li.find('span', attrs={'class': 'threadlist_rep_num center_text'}).text.strip()
            comments.append(comment)
        except:
            print('occur error')

    return comments

def Out2File(dict):
    """
    将爬取到的写入本地文件中
    """
    data_path = '/home/w/Desktop/data.txt'
    with open(data_path, 'a+') as f:
       # set_trace()
        for comment in dict:
            f.write('标题： {}\t 链接： {}\t 发贴人： {}\t  发贴时间: {}\t 回复人： {}\n'.format(
                comment['title'], comment['link'], comment['name'], comment['time'], comment['replyNum']))
        print('fetch done!')

        
def main():
    deep = 3
    url_list = []

    base_url = "http://tieba.baidu.com/f?kw=%E7%94%9F%E6%B4%BB%E5%A4%A7%E7%88%86%E7%82%B8&ie=utf-8"
    for i in range(0, deep):
        url_list.append(base_url + "&pn" + str(50 * i))

    for url  in url_list:
        content = get_content(url)
        Out2File(content)

main()