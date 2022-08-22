import numpy as np
import math
def ExamCmp(elem):
    return elem[1]

def Exam(sus, err):
  
    susArr = [[i, sus[i]] for i in range(1, len(sus))]
    susArr.sort(key = ExamCmp, reverse=True)
   
    susDic = {}

    for item in susArr:
        if item[1] not in susDic.keys():
            susDic[item[1]] = 1
        else :
            susDic[item[1]] += 1
    cnt = 0;
    
    for i in range(0, len(susArr)):

        if i != 0 and susArr[i][1] != susArr[i - 1][1]:
            cnt += susDic[susArr[i - 1][1]] 
 
        susArr[i].append(cnt + (susDic[susArr[i][1]]) / 2)
    #print(susArr)
    for i in range(0, len(susArr)):
        if susArr[i][0] in err:
            return susArr[i][2] / len(susArr)


def TopN(sus, err):
    susArr = [[i, sus[i]] for i in range(1, len(sus))]
    susArr.sort(key = ExamCmp, reverse=True)
    errs = [0] * 11
    susDic = {}

    for item in susArr:
        if item[1] not in susDic.keys():
            susDic[item[1]] = 1
        else :
            susDic[item[1]] += 1
    cnt = 0;
    
    for i in range(0, len(susArr)):

        if i != 0 and susArr[i][1] != susArr[i - 1][1]:
            cnt += susDic[susArr[i - 1][1]] 
        rank = cnt + (susDic[susArr[i][1]]) / 2
        if(rank >= 10.00000001):
            break
        if susArr[i][0] in err:
            errs[math.ceil(rank)] += 1
    for i in range(11):
        errs[i] = errs[i] + errs[i - 1]
    return np.array(errs)
        
