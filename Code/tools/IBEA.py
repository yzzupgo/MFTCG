import random
import math

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

def selIBEA(pop, k):
    f1 = pop[0].fitness.weights[0]
    f2 = pop[0].fitness.weights[1]
    function1Val = [f1 * ind.fitness.values[0] for ind in pop]
    function2Val = [f2 * ind.fitness.values[1] for ind in pop]
    maxA = max(function1Val)
    minA = min(function1Val)
    maxB = max(function2Val)
    minB = min(function2Val)
    ind_pop = [[ind, list(ind.fitness.values), 0] for ind in pop]
    for i in range(len(ind_pop)):
        if(maxA == minA):
            ind_pop[i][1][0] = 1
        else :
            ind_pop[i][1][0] = (f1 * ind_pop[i][1][0] - minA) / (maxA - minA)
        if(maxB == minB):
            ind_pop[i][1][1] = 1
        else :
            ind_pop[i][1][1] = (f2 * ind_pop[i][1][1] - minB) / (maxB - minB)

    for i in range(len(ind_pop)):
        resi = 0
        for j in range(len(ind_pop)):
            if i == j:
                continue
            else :
                dif = max([f2 * ind_pop[j][1][1] - f2 * ind_pop[i][1][1] , f1 * ind_pop[j][1][0] - f1 * ind_pop[i][1][0]])
            resi += math.exp(-dif/5)
    
        ind_pop[i][2 ] = resi
 
    
    while(len(ind_pop) > k) :
                
        
        ind_pop.sort(key=lambda x: x[2])
        key = ind_pop.pop(-1)
    
        for i in range(len(ind_pop)):
            dif = min([f2 * ind_pop[i][1][1] - f2 * key[1][1] , f1 * ind_pop[i][1][0] - f1 * key[1][0] ])
            ind_pop[i][2] = ind_pop[i][2] + math.exp(-dif/5)

    result = [item[0] for item in ind_pop]
    return result

