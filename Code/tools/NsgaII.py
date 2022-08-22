import math
import random
from subprocess import check_output
from typing import NewType

import numpy




def index_of(val, myList):

    for i in range(0, len(myList)):
        if myList[i] == val:
            return i
    return -1

def sort_by_values(list_pos, list_val):
    sorted_list = []
    while(len(sorted_list) != len(list_pos)):
        pos = index_of(min(list_val), list_val)
        if pos in list_pos:
            sorted_list.append(pos)
        list_val[pos] = math.inf
    return sorted_list

def fast_non_dominated_sort(val1, val2):
    S = [[] for i in range(0, len(val1))]
    front = [[]]
    N = [0 for i in range(0, len(val1))]
    rank = [0 for i in range(0, len(val1))]
    for p in range(0, len(val1)):
        S[p] = []
        N[p] = 0
        for q in range(0, len(val1)):
            if(val1[p] >= val1[q] and val2[p] > val2[q]) or (val1[p] > val1[q] and val2[p] >= val2[q]):
                if q not in S[p]:
                   S[p].append(q)
            elif (val1[q] >= val1[p] and val2[q] > val2[q]) or (val1[q] > val1[p] and val2[q] >= val2[p]):
                N[p] = N[p] + 1
            
        if not N[p]:
            rank[p] = 0

            if p not in front[0]:
                front[0].append(p)

    i = 0
    while front[i] != []:
        Q = []
        for p in front[i]:
            for q in S[p]:
                N[q] = N[q] - 1
                if N[q] == 0:
                    rank[q] = i + 1
                    if q not in Q:
                        Q.append(q)
        i = i + 1
        front.append(Q)
    
    del front[len(front) - 1]
    return front




def CrowdingDistance(val1, val2, front):

    distance = [0 for i in range(len(front))]
    valSort1 = sort_by_values(front, val1[:])
    valSort2 = sort_by_values(front, val2[:])

    distance[0] = 44444444
    distance[len(front) - 1] = 44444444
    for k in range(1, len(front) - 2):
    
        if max(val1) - min(val1) == 0:
            distance[k] += 0
            continue
        distance[k] = distance[k] + abs(val1[valSort1[k + 1]] - val1[valSort1[k - 1]]) / (max(val1) - min(val1))
    for k in range(1, len(front) - 2):
        if max(val2) - min(val2) == 0:
            distance[k] += 0
            continue
        distance[k] = distance[k] + abs(val2[valSort2[k + 1]] - val2[valSort2[k - 1]]) / (max(val2) - min(val2))

    return distance


def crossover(parent1, parent2, crossFun, mulFun, crossRate, mulRate, lens):
    newGen = []
    for i in range(len(parent1)):
        genRate = random.random()
        if(genRate > crossRate) :
            choseRate = random.random()
            if choseRate >= 0.5:
                newGen.append(parent1[i])
            else :
                newGen.append(parent2[i])

        else:
            firstId = random.randint(0, lens - 1)
            secondId = random.randint(0, lens - 1)
            newGen.append(crossFun(parent1[firstId], parent2[secondId]))
    for i in range(len(newGen)):
        mutationRate = random.random()
        if mutationRate > mulRate:
            newGen[i] = mulFun(newGen[i])



    return newGen

def genNewCase(genFun, lens) :
    NewCase = []
    for i in range(lens - 1):
        NewCase.append(genFun())
    return NewCase




def NsgaII(genMax, CaseUpdateFun, solution, crossFun, mulFun, mutationRate, crossRate, logPath):
    
    genNo = 0
    popSize = len(solution)

    while genNo < genMax:
        function1Val, function2Val = CaseUpdateFun(genNo * 2, solution[:])
        non_dominated_sorted_solution = fast_non_dominated_sort(function1Val[:], function2Val[:])
      
        solution2 = solution[:]
        for i in range(0, len(non_dominated_sorted_solution) - 1):
            #crowdingDistanceValues.append(CrowdingDistance(function1Val[:], function2Val[:], non_dominated_sorted_solution[i][:]))
            for j in non_dominated_sorted_solution[i]:
                solution2.append(solution[j])
     
    
        
        while(len(solution2) != 2 * popSize):
            firstId = random.randint(0, popSize - 1)
            secondId = random.randint(0, popSize - 1)
            solution2.append(crossover(solution[firstId], solution[secondId], crossFun, mulFun, crossRate, mutationRate, len(solution[0])))
        function1Val2, function2Val2 = CaseUpdateFun(genNo * 2 + 1, solution2[10:])
        non_dominated_sorted_solution2 = fast_non_dominated_sort(function1Val2[:], function2Val2[:])
        #print(function1Val2, function2Val2, non_dominated_sorted_solution2)
        crowdingDistanceValues2 = []

        for i in range(0, len(non_dominated_sorted_solution2)):
            crowdingDistanceValues2.append(CrowdingDistance(function1Val2[:], function2Val2[:], non_dominated_sorted_solution2[i][:]))
        #print('crowd', crowdingDistanceValues2)
        newSolution = []
        for i in range(0, len(non_dominated_sorted_solution2)):
            non_dominated_sorted_solution2_1 = [index_of(non_dominated_sorted_solution2[i][j], non_dominated_sorted_solution2[i]) for j in range(0, len(non_dominated_sorted_solution2[i]))]
            front22 = sort_by_values(non_dominated_sorted_solution2_1[:], crowdingDistanceValues2[i][:])
            front = [non_dominated_sorted_solution2[i][front22[j]] for j in range(0, len(non_dominated_sorted_solution2[i]))]
            front.reverse()
            # print(i, non_dominated_sorted_solution2_1, front22, front)
            for value in front:
                newSolution.append(value)
                if(len(newSolution) == popSize):
                    break
            if(len(newSolution) == popSize):
                break
        solutionFLResult = [-1.0 * function1Val2[i] for i in newSolution]
        solution = [solution2[i] for i in newSolution]
        with open(logPath, 'a+') as fr:
            fr.writelines(str([genNo, newSolution,  solutionFLResult]) + '\n')

        genNo += 1
    return solution
        
    
     