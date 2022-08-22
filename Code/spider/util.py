
import os
import requests as rq

def getHtml(url):
    try: 
        text = rq.get(url).text
    except:
        print('url 请求失败,重新请求')
        return getHtml(url)
    return text


def mkdir_p(path):
    if not os.path.exists(path):
        os.mkdir(path)
