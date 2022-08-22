import math
import numpy as np

def calCovInfo(linesNumber, cov, res):
    caseNum = len(res)
    stateICovPassNum, stateICovFailNum =  np.zeros(linesNumber + 1), np.zeros(linesNumber + 1)
    for index in range(1, linesNumber + 1):
        covPass, covFail, uncovPass, uncovFail = 0, 0, 0, 0
        for pos in range(len(res)):
      
            if index in cov[pos]:
                if res[pos]:
                    covPass += 1
                else :
                    covFail += 1
      
        stateICovPassNum[index] = covPass
        stateICovFailNum[index] = covFail
 
    totalPass = np.array(res).sum()
    totalFail = len(res) - totalPass

    return  totalFail, totalPass, stateICovFailNum, stateICovPassNum



def callJaccard(totalFail, totalPass, covFail, covPass):
    try:
        if totalPass + covPass == 0:
            return 0
        else:
            ans = covFail /(totalPass + covPass)
            return ans
    except Exception:
        return 0

def callTarantula(totalFail, totalPass, covFail, covPass):
    try:
        if totalFail == 0 or totalPass == 0:
            return 0
        covFailRate = covFail / totalFail
        covPassRate = covPass / totalPass
     
        if (covFailRate + covPassRate) == 0:
            return 0 
        ans = covFailRate / (covFailRate + covPassRate)
        return ans
        
    except Exception:
      
        return 0

def callOchiai(totalFail, totalPass, covFail, covPass):
    try:

        down = math.sqrt(totalFail * (covFail + covPass))
        if down == 0:
            return 0
        ans = covFail / down
        return ans
    except Exception:
        return 0

def calllOp2(totalFail, totalPass, covFail, covPass):
    try:
        if (totalPass + 1) == 0:
            return 0        
        ans = covFail - covPass / (totalPass + 1)
        return ans
    except:
        return 0

def callDstar(totalFail, totalPass, covFail, covPass, rate = 3):
    try:
        if (covPass + (totalFail - covFail)) == 0:
            return 0
        ans = math.pow(covFail , rate) / (covPass + (totalFail - covFail))
        return ans
    except:
        return 0