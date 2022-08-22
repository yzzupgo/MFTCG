#from typing_extensions import ParamSpecKwargs
import NsgaII 
import IBEA
import sys
import os
import Tools
from SBFL import SBFL_CPP 
sys.path.append(os.path.join(Tools.BaseDir, 'Code','DataBuild'))
import build_abc206_a as a206
import build_abc162_b as b162
import build_abc171_c as c171
import build_abc170_b as b170
import build_abc177_a as a177
import build_abc194_a as a194

import argparse
import cppTools
import subprocess
COMPLETE_CPP = 'timeout 5 g++ %s -o %s -std=c++11'
RUN_EXE = 'timeout 5 %s <%s >%s'

SCORE_NONE = -1
TC_SET_SIZE = 10
resultPath = os.path.join(Tools.BaseDir, 'result')
Tools.mkdir(resultPath)



class Case(object):
    def __init__(self, cases):
        self.inputContent = cases
class Life(object):
    def __init__(self, aGene = None):
        self.gene = aGene
        self.score = SCORE_NONE
        self.coverage = 0

questionDic = {

    'abc206_a': a206,
    'abc162_b': b162,
    'abc171_c': c171,
    'abc170_b': b170,
    'abc177_a': a177,
    'abc194_a': a194,

}


class GA(object):
    def __init__(self, aCrossRate, aMutationRate,aLifeCount, gFun, aquestion, atcSize):
        self.crossRate = aCrossRate
        self.lifeCount = aLifeCount
        self.mutationRate = aMutationRate
        self.fun = gFun
        self.lives = []
        self.tcSize = atcSize
        self.question = aquestion
    
    def initPopulation(self) :
        self.lives = []
        for i in range(self.lifeCount):
            gene = []
            for j in range(self.tcSize):
                gene.append(questionDic[self.question].build())
            self.lives.append(gene)
    def initApp(self):

        cppDir = os.path.join(Tools.BaseDir, 'ACcode', '{}.cpp'.format(self.question))
        if self.question not in os.listdir(os.path.join(Tools.BaseDir, 'ACcode')):

            cmd = COMPLETE_CPP % (cppDir, '{}'.format(self.question))
            baseDir = os.path.join(Tools.BaseDir, 'ACcode')
            Pcmd = subprocess.Popen('cd {} && {}'.format(baseDir, cmd), shell = 'True')
            Pcmd.wait()
        


    def updateCase(self, times, mylives):
        
        CaseDir = os.path.join(Tools.BaseDir, 'TestCase', '{}_{}'.format(self.question, times))
        Tools.mkdir(CaseDir)
        RightCaseDir = os.path.join(Tools.BaseDir, 'Tmp', '{}_{}'.format(self.question, times))
        Tools.mkdir(RightCaseDir)
        FLLiveScore = []
        CovLiveScore = []
        for i in range(len(mylives)):
            lifeDir = os.path.join(CaseDir, '{}'.format(i))
            RightLifeDir = os.path.join(RightCaseDir, '{}'.format(i))
            Tools.mkdir(lifeDir)
            Tools.mkdir(RightLifeDir)
            inDir = os.path.join(lifeDir, 'in') 
            outDir = os.path.join(lifeDir, 'out') 
            RoutDir = os.path.join(RightLifeDir, 'out')
            Tools.mkdir(inDir)
            Tools.mkdir(outDir)
            Tools.mkdir(RoutDir)
      
            CaseCnt = 0
          
            for item in mylives[i]:
               
            
                incont = str(item)[1:-1].replace(',','')
                inTxT = os.path.join(inDir, '{}.txt'.format(CaseCnt))
                #print(inTxT)
                Tools.WriteStrToFile(incont, inTxT)
                RoutTxt = os.path.join(RoutDir, '{}.txt'.format(CaseCnt))
                exePath = os.path.join(Tools.BaseDir, 'ACcode', self.question)
                runCmd= RUN_EXE%(exePath, inTxT, RoutTxt)
                cmdP = subprocess.Popen('{}'.format(runCmd), shell='True')
                cmdP.wait()
                CaseCnt += 1 
          
            
            questionTxt = '{}.txt'.format(self.question)
            questionTxt = os.path.join(Tools.BaseDir, 'Pairs', questionTxt)
            testCase = os.path.join(lifeDir)
            lines = Tools.ReadLinesFromFile(questionTxt)
            FLEverage = 0
            codeCoverageSum = 0

            for item in lines[0:15]:
                src = os.path.join(Tools.BaseDir, item.split(' ')[0])
                faults = [int(line) for line in item.split('[')[-1][:-1].split(',')]
                lenLines =  int(item.split(' ')[2])
                FLResult, codeCoverage = SBFL_CPP(src, testCase, faults, RoutDir, "ochiai", lenLines, times )
                FLEverage += FLResult
                codeCoverageSum += len(codeCoverage)
            
            FLEverage /= 15
            codeCoverageSum /= 15
            FLLiveScore.append(-1.0 * FLEverage)
            CovLiveScore.append(codeCoverageSum)
        return FLLiveScore, CovLiveScore 
         
            

            
def parserArgs():
    parser = argparse.ArgumentParser()
    parser.add_argument('-q', '--question', help='question Id', default='abc206_a',   type=str)
    parser.add_argument('-m', '--mutation', help='mutation rate', default=0.7, type=float)
    parser.add_argument('-c', '--cross', help='cross rate', default=0.5, type=float)
    parser.add_argument('-f', '--function', help='search function', default='ibea', type=str)
    parser.add_argument('-e', '--epoch', help='epoch num', default=500, type=int)
    parser.add_argument('-l', '--live', help='live num', default=10, type=int)
    parser.add_argument('-s', '--case', help='case num for a live', default=10)
    parser.add_argument('-p', '--percent', help='cross percent', default='0.5', type=float)
    return parser.parse_args()




                



if __name__ == '__main__':
    args = parserArgs()
    quesitonId = args.question
    exp = GA(args.cross, args.mutation, args.live, questionDic[quesitonId].build, quesitonId,args.case)
    exp.initPopulation()
    exp.initApp()
    if args.function == 'nsgaII':
        MethodResultDir = os.path.join(resultPath, 'nsgaII')
        Tools.mkdir(MethodResultDir)
        reusltTxt = os.path.join(MethodResultDir, quesitonId + '.txt')
    elif args.function == 'ibea':
        MethodResultDir = os.path.join(resultPath, 'ibea')
        Tools.mkdir(MethodResultDir)
        reusltTxt = os.path.join(MethodResultDir, quesitonId + '.txt')
        IBEA.IBEA(args.epoch, exp.updateCase, exp.lives, questionDic[quesitonId].cross, questionDic[quesitonId].mutation,  exp.mutationRate, exp.crossRate,  \
        reusltTxt)
        
                



