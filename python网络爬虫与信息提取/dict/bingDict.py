import os
import requests
from bs4 import BeautifulSoup 


def getInput():
    w = input("Enter a word: ")
    return w


def getPage(word, url):
    try:
        r = requests.get(url + word)
        r.raise_for_status()
        r.encoding = r.apparent_encoding
    except:
        print("query failure!")
    else:
        return r.text  #  r.text[-500:]

    
def query(page):
    soup = BeautifulSoup(page, "html.parser")
    #print(soup.prettify())
    print(soup)

    
def main():
    url = "https://cn.bing.com/dict/search?q="

    word = getInput()
    demo = getPage(word, url)
    query(demo)

    
main()



