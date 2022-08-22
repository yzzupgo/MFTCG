import numpy as np
import os
import subprocess

from numpy.core.fromnumeric import _cumprod_dispatcher
from cppTools import *
from Tools import *
from Formula import *
import Metrics 


np.set_printoptions(linewidth=200)
#src, testCase, faults, RoutDir, "dstar", times, method
def SBFL_CPP(src, testDataDirPath, faults, rightAnswerPath, gFun, checkfun ,expCnt = 0):
    #print(src)
    #print(src, testDataDirPath, faults, rightAnswerPath, gFun, checkfun)
    appName = src.split('/')[-1].split('.')[0]
    questionDir = os.path.join(BaseDir, 'Deal', appName)
    mkdir(questionDir)
    target = os.path.join(BaseDir, 'Deal', appName,'{}.cpp'.format(appName))
    app = os.path.join(BaseDir, 'Deal', appName, appName)
    if not os.path.exists(target):
    
        copy(src, target)
        cmd = COMLINE_COMPILE_CPP % (target, app)
    
        Pcmd = subprocess.Popen('cd {} && {}'.format(questionDir, cmd), shell = 'True')
        Pcmd.wait()
    Cov, Res, CovSet = getSrcCov_CPP(appName, testDataDirPath, rightAnswerPath)
    targetLines = ReadLinesFromFile(target)
    lineCnt = len(targetLines)
    
    totalFail, totalPass, stateICovFailNum, stateICovPassNum = calCovInfo(lineCnt, Cov, Res)
    jaccardResult = np.zeros(lineCnt + 1)
    tarantulaResult = np.zeros(lineCnt + 1)
    ochiaiResult = np.zeros(lineCnt + 1)
    op2Result = np.zeros(lineCnt + 1)
    dstarResult = np.zeros(lineCnt + 1)
  

    for i in range(1, lineCnt + 1):


        jaccardResult[i] = callJaccard(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        tarantulaResult[i] = callTarantula(
            totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        ochiaiResult[i] = callOchiai(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        op2Result[i] = calllOp2(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        dstarResult[i] = callDstar(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
    # WriteLinesToFile([
    #     'jaccard:  ' + str(jaccardResult) + '\n',
    #     'tarantula:  ' + str(tarantulaResult) + '\n',
    #     'ochiai:  ' + str(ochiaiResult) + '\n',
    #     'op2:  ' + str(op2Result) + '\n',
    #     'dstar:  ' + str(dstarResult) + '\n',
    #     'coverage:  ' + str(CovSet) + '\n'
    # ], '{}/SBFLresult_{}.txt'.format(questionDir, expCnt))
    FLresult = []
    if gFun == 'jaccard':
        FLresult = jaccardResult
        #return jaccardResult, codeCoverage
    elif gFun == 'tarantula':
        FLresult = tarantulaResult        
        #return tarantulaResult, codeCoverage
    elif gFun == 'ochiai':
        FLresult = ochiaiResult
        #return ochiaiResult, codeCoverage
    elif gFun == 'op2':
        FLresult = op2Result
        #return op2Result, codeCoverage
    elif gFun == 'dstar':
        FLresult = dstarResult
        #return dstarResult, codeCoverage
    #print(src)
    if checkfun == 'TOPN':
        FLresult = Metrics.TopN(FLresult, faults)
        FLresult = 0.7 * FLresult[0] + 0.15 * FLresult[1] + 0.1 * FLresult[2] + 0.05 * FLresult[4]
    else :
        FLresult = Metrics.Exam(FLresult, faults)
    #print(FLresult)
    #print(FLresult)
    return FLresult, list(CovSet)
    #return jaccardResult, tarantulaResult, ochiaiResult, op2Result, dstarResult, codeCoverage
    # print(jaccardResult, tarantulaResult, ochiaiResult, op2Result, dstarResult)


def SBFL_TOPN(src, testDataDirPath, faults, rightAnswerPath):

    appName = src.split('/')[-1].split('.')[0]
    questionDir = os.path.join(BaseDir, 'Deal', appName)
    mkdir(questionDir)
    target = os.path.join(BaseDir, 'Deal', appName,'{}.cpp'.format(appName))
    app = os.path.join(BaseDir, 'Deal', appName, appName)

    if not os.path.exists(target):
        print(src)
        copy(src, target)
        cmd = COMLINE_COMPILE_CPP % (target, app)
 
        Pcmd = subprocess.Popen('cd {} && {}'.format(questionDir, cmd), shell = 'True')
        Pcmd.wait()
    Cov, Res, CovSet = getSrcCov_CPP(appName, testDataDirPath, rightAnswerPath)
    targetLines = ReadLinesFromFile(target)
    lineCnt = len(targetLines)
    
    totalFail, totalPass, stateICovFailNum, stateICovPassNum = calCovInfo(lineCnt, Cov, Res)
    jaccardResult = np.zeros(lineCnt + 1)
    tarantulaResult = np.zeros(lineCnt + 1)
    ochiaiResult = np.zeros(lineCnt + 1)
    op2Result = np.zeros(lineCnt + 1)
    dstarResult = np.zeros(lineCnt + 1)
    #print('canshu is : ', totalFail, totalPass, stateICovFailNum, stateICovPassNum)
    # codeCoverage = []

    for i in range(1, lineCnt + 1):

        # if stateICovPassNum[i] > 0 or stateICovFailNum[i] > 0:
        #     codeCoverage.append(i)

        jaccardResult[i] = callJaccard(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        tarantulaResult[i] = callTarantula(
            totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        ochiaiResult[i] = callOchiai(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        op2Result[i] = calllOp2(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
        dstarResult[i] = callDstar(totalFail, totalPass, stateICovFailNum[i], stateICovPassNum[i])
  


    jaccardFLresult = Metrics.TopN(jaccardResult, faults)
    tarantulaFLresult = Metrics.TopN(tarantulaResult, faults)
    ochiaiFLresult = Metrics.TopN(ochiaiResult, faults)
    op2FLresult = Metrics.TopN(op2Result, faults)
    dstarFLresult = Metrics.TopN(dstarResult, faults)
   
    #print(FLresult)
    isFindFault = False
    for item in Res:
        if item == False:
            isFindFault = True
            break

    return np.array([jaccardFLresult, tarantulaFLresult, ochiaiFLresult, op2FLresult, dstarFLresult]), isFindFault
    #return jaccardResult, tarantulaResult, ochiaiResult, op2Result, dstarResult, codeCoverage
    # print(jaccardResult, tarantulaResult, ochiaiResult, op2Result, dstarResult)

  


if __name__ == '__main__':
    resultPath = os.path.join(BaseDir, 'Pairs')
    for questionTxt in os.listdir(resultPath):
        question = questionTxt.strip().split('.')[0]
        testCase = os.path.join(BaseDir, 'TestCase', question)
        lines = ReadLinesFromFile(os.path.join(resultPath, questionTxt))

        for item in lines[0:15]:
            src = os.path.join(BaseDir, item.split(' ')[0])
        
            faults = [int(line) for line in item.split('[')[-1][:-1].split(',')]
            ilens = 0
            #SBFL_CPP(src, testCase, faults)
            with open(src ,'r') as frr:
                ilines = frr.readlines();
        
            #SBFL_CPP(src, testCase, faults, os.path.join(BaseDir, 'ACcode', 'abc206_a.cpp'), 'ochiai', -1)
         
         
        



        
