import os
import html
import util
import requests as rq
import lxml
from lxml import etree
from bs4 import BeautifulSoup 


def getCode(url):
    htmltext = util.getHtml(url)
    soup = BeautifulSoup(htmltext, "html.parser")
    code = html.unescape(str(soup.find_all('pre', id='submission-code')))[56:-7]
    return code


def getUserSubmitList(url):
    
    page = 1
    waList = []
    acList = []
    while True:
        PageUrl = url.format(page)
        htmltext = util.getHtml(PageUrl)
        soup = BeautifulSoup(htmltext, "html.parser")
        Items = soup.find_all('table', attrs={'table table-bordered table-striped small th-center'})
        try:
            Itemstext = html.unescape(str(Items[0]))
            myhtml = etree.HTML(Itemstext) 
            SubmitItems = myhtml.xpath('//table/tbody/tr/td')
            SubmitCount = 0  
            for pos in range(0, len(SubmitItems), 10):
                try:
                    codeUrl = SubmitItems[pos + 9].xpath('a/@href')[0]
                    status = SubmitItems[pos + 6].xpath('span')[0].text
                    if status == 'AC':
                            acList.append('https://atcoder.jp' + codeUrl)
                    elif status == 'WA':
                        waList.append('https://atcoder.jp' + codeUrl)
            
                    SubmitCount += 1
                except:
                    pass

            if SubmitCount < 20:
                break
            page += 1
        except:
            break

    return acList, waList


if __name__ == '__main__':

    # #test spider of code
    # url = 'https://atcoder.jp/contests/abc206/submissions/24625835'
    # code = getCode(url)


    
    # #test spider of submit list of one user
    # url = 'https://atcoder.jp/contests/abc206/submissions?f.LanguageName=C%2B%2B&f.Status=&f.Task=abc206_a&f.User=vjudge4+&page={}'
    # acList, waList = getUserSubmitList(url)
    # print(acList, waList)
    pass