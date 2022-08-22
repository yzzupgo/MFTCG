from lxml import etree
import requests as rq
from requests.api import request
from bs4 import BeautifulSoup
import os
from selenium import webdriver
import html
# options = webdriver.ChromeOptions()
# driver = webdriver.Chrome(options=options)

url = 'https://atcoder.jp/contests/abc206/submissions/24625835'
html_cont = rq.get(url).text

soup = BeautifulSoup(html_cont, "html.parser")
#print(soup)
cont = html.unescape(str(soup.find_all('pre', id='submission-code')))
lenpre = len('[<pre class="prettyprint linenums" id="submission-code">')

cont = cont[56:-7]
# continue_link = driver.find_element_by_id('for_copy0')
# print(continue_link)
print(cont)
