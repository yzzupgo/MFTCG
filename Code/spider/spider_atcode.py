
import os
import html
import util
from lxml import etree
import spider_code as SC
from bs4 import BeautifulSoup 


userList = []


    
def GetWaUsers(url):
    
    html_content= util.getHtml(url)
    myhtml = etree.HTML(html_content) 

    Items = myhtml.xpath('/html/body/div[3]/div/div[1]/div[3]/div[2]/div[2]/table/tbody/tr/td')
    # print(len(Items))
    userCount = 0
    for pos in range(0, len(Items), 10):
        user = Items[pos + 2].xpath('a/@href')[0].split('/')[-1]
        userList.append(user)
        userCount += 1
    return userCount




def main(contestId, problemId, SavePath):
    baseurl = 'https://atcoder.jp/contests/{}/submissions?f.LanguageName=C%2B%2B'.format(contestId)
    url = baseurl + '&f.Status=WA&f.Task={}&f.User=&page={}'
    dataPath = SavePath
    page = 1
    while True:
        Pageurl = url.format(problemId, page)
        userCount = GetWaUsers(Pageurl)
        if userCount < 20:
            break
        
        print('page {} finish'.format(page))
        page += 1
     
    userset = list(set(userList))
    problemPath = os.path.join(SavePath, problemId)
    util.mkdir_p(problemPath)

    for user in userset:
        query_user_url = '{}&f.Status=&f.Task={}&f.User={}+'.format(baseurl, problemId, user) + '&page={}'
        acList, waList = SC.getUserSubmitList(query_user_url)
        if len(acList) > 0 and len(waList) > 0:
            userPath = os.path.join(problemPath, user)
            util.mkdir_p(userPath)
            ac_path = os.path.join(userPath, 'ac')
            wa_path = os.path.join(userPath, 'wa')
            util.mkdir_p(ac_path)
            util.mkdir_p(wa_path)
            print('{}\'s code has been download'.format(user))
            for acurl in acList:
                submitId = acurl.split('/')[-1]
                code_path = os.path.join(ac_path, '{}.txt'.format(submitId))
                ac_code = SC.getCode(acurl)
                try: 
                    with open(code_path, 'w') as fw:
                        fw.write(ac_code)
                except:
                    print('{} {} ac {} has error'.format(problemId, user, submitId))
            for waurl in waList:
                submitId = waurl.split('/')[-1]
                code_path = os.path.join(wa_path, '{}.txt'.format(submitId))
                wa_code = SC.getCode(waurl)
                try:
                    with open(code_path, 'w') as fw:
                        fw.write(wa_code)
                except:
                    print('{} {} wa {} has error'.format(problemId, user, submitId))



if __name__== '__main__':
    contestId = 'abc206'
    problemId = '{}_a'.format(contestId)
    main(contestId, problemId, r'/home/xtangchow/Desktop/Atcoder')
   
    