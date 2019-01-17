# coding: utf-8


import requests

url = "https://www.amazon.cn/dp/B01K78MSHW"

try:
    kv = {'user-agent':'Mozilla/5.0'}
    r = requests.get(url, headers = kv)
    r.raise_for_status()
    r.encoding = r.apparent_encoding
    print(r.text[1000:2000])
except:
    print("爬取失败")
