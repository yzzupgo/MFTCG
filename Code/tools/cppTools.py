import os
from Tools import *
import subprocess
from shutil import copy


COMLINE_COMPILE_CPP = "timeout 5 g++ -fprofile-arcs -ftest-coverage %s -o %s -D ONLINE_JUDGE -std=c++11"
COMLINE_RUN_CPP = "timeout 5 %s <%s >%s"
COMLINE_GCOV_CPP = "timeout 5 gcov %s > ~/a.txt " 

def getHashFromList(s):
    hashVal = 0
    MOD = 1 << 31
    for item in s:
        hashVal *= 163729
        hashVal += item
        hashVal %= MOD
    return hashVal

  
def getSrcCov_CPP(appName, testDataPath, rightAnswerPath):

    CovInfo = []
    InPath = os.path.join(testDataPath, 'in')
    OutPath = os.path.join(testDataPath, 'out')
    ExpCodeDir =  os.path.join(BaseDir, 'Deal', appName)
    appPath = os.path.join(ExpCodeDir , appName)
    ExpOutPath =  rightAnswerPath #os.path.join(ExpCodeDir, 'out')
    mkdir(ExpOutPath)

    Result = []

    CovSet = []
    for inTxt in os.listdir(InPath) :
        
        subprocess.call('rm {}/*.gcov {}/*.gcda'.format(ExpCodeDir, ExpCodeDir), shell=True)
       
        inName = inTxt.split('.')[0]
        InFilePath = os.path.join(InPath, inTxt)
        ExpoutFilePath = os.path.join(ExpOutPath, '{}.txt'.format(inName))
        outFilePath = os.path.join(OutPath, '{}.txt'.format(inName))
        execCmd = COMLINE_RUN_CPP % (appPath, InFilePath, outFilePath)
        cmdP = subprocess.Popen('cd {} && {}'.format(ExpCodeDir, execCmd), shell='True')
        cmdP.wait()
        covCmd = COMLINE_GCOV_CPP % (os.path.join(ExpCodeDir, '{}.cpp'.format(appName)))
        cmdP = subprocess.Popen('cd {} && {}'.format(ExpCodeDir, covCmd), shell = 'True')
        cmdP.wait()

        gcovPath = os.path.join(ExpCodeDir, '{}.cpp.gcov'.format(appName))
        coverageLines = ReadLinesFromFile(gcovPath)
        execCnt = []
        tmpCovLine = []
     
        for line in coverageLines:
        
            line = line.strip().split(':')
            if line[0] != '-' and line[0] != '#####':
                if len(line) == 1 or len(line[1].strip()) == 0:
                    continue
       
                tmpCovLine.append(int(line[1].strip()))

        
        Result.append(CompareFile(ExpoutFilePath, outFilePath))
        #tmpCovLine.append(tmpCovLine)
        CovInfo.append(tmpCovLine)
        CovSet.append(getHashFromList(tmpCovLine + [int(Result[-1])]))
    CovSet = set(CovSet)
    # print(len(list(CovSet)))
    return CovInfo, Result, CovSet