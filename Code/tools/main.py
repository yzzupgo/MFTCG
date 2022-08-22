from random import random
from typing import DefaultDict
from deap import algorithms
from deap import base
from deap import benchmarks
from deap.benchmarks.tools import diversity, convergence, hypervolume
from deap import creator
from deap import tools
import subprocess
import argparse
import random
import array
import sys
import os
import IBEA
import numpy as np


import Tools
from SBFL import SBFL_CPP 
from SBFL import SBFL_TOPN
sys.path.append(os.path.join(Tools.BaseDir, 'Code','DataBuild'))
import build_abc206_a as a206
import build_abc162_b as b162
import build_abc171_c as c171
import build_abc170_b as b170
import build_abc177_a as a177
import build_abc194_a as a194

COMPLETE_CPP = 'timeout 5 g++ %s -o %s -std=c++11'
RUN_EXE = 'timeout 5 %s <%s >%s'
GEN_CNT = 0

expList = []

questionDic = {
    'abc206_a': a206,
    'abc162_b': b162,
    'abc171_c': c171,
    'abc170_b': b170,
    'abc177_a': a177,
    'abc194_a': a194,
}
def get_GEN_CNT():
    global GEN_CNT
    return GEN_CNT

def initApp(question):

    cppDir = os.path.join(Tools.BaseDir, 'ACcode', '{}.cpp'.format(question))
    if question not in os.listdir(os.path.join(Tools.BaseDir, 'ACcode')):

        cmd = COMPLETE_CPP % (cppDir, '{}'.format(question))
        baseDir = os.path.join(Tools.BaseDir, 'ACcode')
        Pcmd = subprocess.Popen('cd {} && {}'.format(baseDir, cmd), shell = 'True')
        Pcmd.wait()

    
def checkPop(pop, question, pairs):
    CaseDir = os.path.join(Tools.BaseDir, 'TestCase', '{}_result'.format(question))
    Tools.mkdir(CaseDir)
    RightCaseDir = os.path.join(Tools.BaseDir, 'Tmp', '{}_result'.format(question))
    Tools.mkdir(RightCaseDir)

    inDir = os.path.join(CaseDir, 'in') 
    outDir = os.path.join(CaseDir, 'out') 
    RoutDir = os.path.join(RightCaseDir, 'out')
    Tools.mkdir(inDir)
    Tools.mkdir(outDir)
    Tools.mkdir(RoutDir)

    CaseCnt = 0
    
    for item in pop:
        
    
        incont = str(item)[1:-1].replace(',','')
        inTxT = os.path.join(inDir, '{}.txt'.format(CaseCnt))
        #print(inTxT)
        Tools.WriteStrToFile(incont, inTxT)
        RoutTxt = os.path.join(RoutDir, '{}.txt'.format(CaseCnt))
        exePath = os.path.join(Tools.BaseDir, 'ACcode', question)
        runCmd= RUN_EXE%(exePath, inTxT, RoutTxt)
        cmdP = subprocess.Popen('{}'.format(runCmd), shell='True')
        cmdP.wait()
        CaseCnt += 1 
    
    

    itemcnt = 0

    testCase = os.path.join(CaseDir)

    result = np.zeros([5, 11])
    waCode = []

    for item in pairs:

        src = item[0]
        faults = item[1]
        #print(src, faults)
        itemresult, isFindFault = SBFL_TOPN(src, testCase, faults, RoutDir)
        if (isFindFault):
            waCode.append(itemcnt)
        result += itemresult
        itemcnt += 1
    return result, waCode
      
def getExpData(question):
    questionTxt = '{}.txt'.format(question)
    questionTxt = os.path.join(Tools.BaseDir, 'Pairs', questionTxt)

    lines = Tools.ReadLinesFromFile(questionTxt)
    testData = []
    for item in lines:
      
        src = os.path.join(Tools.BaseDir, item.split(' ')[0])
        faults = [int(line) for line in item.split('[')[-1][:-1].split(',')]
    
        #print(src, faults)
        testData.append([src, faults])
    return testData        





def updateCase(tmpLives ,  question, method, fun):
    global expList
   
    times = get_GEN_CNT()
    # print(times, len(expList))
    CaseDir = os.path.join(Tools.BaseDir, 'TestCase', '{}_{}_{}'.format(question, fun, times))
    Tools.mkdir(CaseDir)
    RightCaseDir = os.path.join(Tools.BaseDir, 'Tmp', '{}_{}_{}'.format(question, fun, times))
    Tools.mkdir(RightCaseDir)
    # FLLiveScore = []
    # CovLiveScore = []
    
   
    inDir = os.path.join(CaseDir, 'in') 
    outDir = os.path.join(CaseDir, 'out') 
    RoutDir = os.path.join(RightCaseDir, 'out')
    Tools.mkdir(inDir)
    Tools.mkdir(outDir)
    Tools.mkdir(RoutDir)

    CaseCnt = 0
    
    for item in tmpLives:
        
    
        incont = str(item)[1:-1].replace(',','')
        inTxT = os.path.join(inDir, '{}.txt'.format(CaseCnt))
        #print(inTxT)
        Tools.WriteStrToFile(incont, inTxT)
        RoutTxt = os.path.join(RoutDir, '{}.txt'.format(CaseCnt))
        exePath = os.path.join(Tools.BaseDir, 'ACcode', question)
        runCmd= RUN_EXE%(exePath, inTxT, RoutTxt)
        cmdP = subprocess.Popen('{}'.format(runCmd), shell='True')
        cmdP.wait()
        CaseCnt += 1 
    
    
    questionTxt = '{}.txt'.format(question)
    questionTxt = os.path.join(Tools.BaseDir, 'Pairs', questionTxt)
    testCase = os.path.join(CaseDir)
    lines = Tools.ReadLinesFromFile(questionTxt)
    FLEverage = 0
    codeCoverageSum = 0

    for item in expList:

        src = item[0]
        faults = item[1]
       
        FLResult, codeCoverage = SBFL_CPP(src, testCase, faults, RoutDir, "dstar", method, times)
        # print("------FLResult :", FLResult)
        FLEverage += FLResult
        codeCoverageSum += len(codeCoverage)

    FLEverage /= len(expList)
    codeCoverageSum /= len(expList)
    # FLLiveScore.append(FLEverage)
    # CovLiveScore.append(codeCoverageSum)
    return FLEverage, codeCoverageSum 




def main():
    global GEN_CNT
    global expList
    args = parserArgs()
    quesitonId = args.question
    initApp(quesitonId)
    toolbox = base.Toolbox()
    testList = getExpData(quesitonId)
    pos = random.randint(0, len(testList) - 1)
    for i in range(20):
        while testList[pos] in expList :
            pos = random.randint(0, len(testList) - 1)
        expList.append(testList[pos])
    #print(expList)
    if (args.method == 'TOPN'):
        if(args.function == 'ga'):
            creator.create("FitnessMax", base.Fitness, weights=(1.0, ))
        else :
            creator.create("FitnessMax", base.Fitness, weights=(1.0, 1.0))
    else :
        if(args.function == 'ga'):
            creator.create("FitnessMax", base.Fitness, weights=(-1.0, ))
        else :
            creator.create("FitnessMax", base.Fitness, weights=(-1.0, 1.0))
    creator.create("Individual", list, fitness=creator.FitnessMax)
    toolbox.register("genFunction", questionDic[quesitonId].build)
    toolbox.register("individual", tools.initRepeat, creator.Individual, toolbox.genFunction, n = args.case)
    toolbox.register("population", tools.initRepeat, list, toolbox.individual)
    Tools.mkdir(os.path.join(Tools.BaseDir, 'result'))
    Tools.mkdir(os.path.join(Tools.BaseDir, 'result', args.function))
    pop = toolbox.population(n = args.live)
    if(args.function == 'nsgaII'):
        toolbox.register("select", tools.selNSGA2)
    elif(args.function == 'speaII'):
        toolbox.register("select", tools.selSPEA2)
    elif(args.function == 'ibea'):
        toolbox.register("select", IBEA.selIBEA)
    elif args.function == 'ga':
        toolbox.register("select", tools.selBest)
    toolbox.register("evaluate", updateCase ,question=quesitonId, method=args.method, fun=args.function)
    toolbox.register("mate", questionDic[quesitonId].cross)
    toolbox.register("mutate",questionDic[quesitonId].mutation)
    invalid_ind = [ind for ind in pop if not ind.fitness.valid]
    fitnesses = toolbox.map(toolbox.evaluate, invalid_ind)
    for ind, fit in zip(invalid_ind, fitnesses):
        ind.fitness.values = fit
    pop = toolbox.select(pop, len(pop))


    toolbox.register("resultEvaluate", checkPop ,question=quesitonId,  pairs = testList)
    for gen in range(args.epoch):
        print("Now gen is : ", gen)
        GEN_CNT = gen
        offspring = tools.selTournament(pop, args.live, 2)
        offspring = [toolbox.clone(ind) for ind in offspring]
        for ind1, ind2 in zip(offspring[::2], offspring[1::2]):
        
            if random.random() < args.cross:  
                toolbox.mate(ind1, ind2, args.crate)
    
            toolbox.mutate(ind1, args.mutation)
            toolbox.mutate(ind2, args.mutation)

            del ind1.fitness.values, ind2.fitness.values
        invalid_ind = [ind for ind in offspring if not ind.fitness.valid]
        fitnesses = toolbox.map(toolbox.evaluate, invalid_ind)
        for ind, fit in zip(invalid_ind, fitnesses):
            ind.fitness.values = fit
        pop = toolbox.select(pop + offspring, args.live)
        ccc = quesitonId + "_xiao"
        with open(os.path.join(Tools.BaseDir, 'result', args.function, ccc), 'a+') as fr:
            fr.write('-----------  gen is {} ------------\n'.format(gen))
            for ind in pop:
                fr.write('case is{} fitnesses is {}\n'.format( ind,  ind.fitness.values))
        if gen and gen % 1000 == 0:
            maxVal = 0
            newCase = []
            resultEvaluate = toolbox.map(toolbox.resultEvaluate, pop)
            for ind, fit in zip(invalid_ind, resultEvaluate):
                del ind.fitness.values
                
                tmpVal = fit[0][:,0]
              
        
                if max(tmpVal) > maxVal:
                    maxVal = max(tmpVal)
                    if len(fit[1]) > 20:
                        pos = random.randint(0, len(fit[1]) - 1)
                        for i in range(20):
                            while fit[1][pos] in newCase :
                                del fit[1][pos]
                                pos = random.randint(0, len(fit[1]) - 1)
                            newCase.append(fit[1][pos])
                    else :
                        newCase = fit[1]
            newCases = [testList[i] for i in newCase]
            for i in newCases:
                if i in expList:
                    continue
                else :
                    expList.append(i)
            invalid_ind = [ind for ind in pop if not ind.fitness.valid]
            fitnesses = toolbox.map(toolbox.evaluate, invalid_ind)
            for ind, fit in zip(invalid_ind, fitnesses):
                ind.fitness.values = fit
            
                
    invalid_ind = [ind for ind in pop]

    resultEvaluate = toolbox.map(toolbox.resultEvaluate, invalid_ind)
    for ind, fit in zip(invalid_ind, resultEvaluate):
        del ind.fitness.values,
        ind.fitness.values = (fit[0],len(fit[1]))

    with open(os.path.join(Tools.BaseDir, 'result', args.function, quesitonId), 'a+') as fr:
        fr.write('-----------  Finall result  ------------\n')
        for ind in pop:
            fr.write('case is{} \n TOPN is {} Wrong code is {}\n'.format( ind,  ind.fitness.values[0], ind.fitness.values[1]))  



def parserArgs():
    parser = argparse.ArgumentParser()
    parser.add_argument('-q', '--question', help='question Id', default='abc170_b',   type=str)
    parser.add_argument('-m', '--mutation', help='mutation rate', default=0.7, type=float)
    parser.add_argument('-c', '--cross', help='cross rate', default=0.5, type=float)
    parser.add_argument('-r', '--crate', help='cross percent rate', default=0.5, type=float)
    parser.add_argument('-f', '--function', help='search function', default='nsgaII', type=str)
    parser.add_argument('-e', '--epoch', help='epoch num', default=500, type=int)
    parser.add_argument('-l', '--live', help='live num', default=10, type=int)
    parser.add_argument('-s', '--case', help='case num for a live', default=15)
    parser.add_argument('-d', '--method', help='check fun', default='TOPN', type=str)
    

    
    return parser.parse_args()



if __name__ == "__main__":
    main()

    
