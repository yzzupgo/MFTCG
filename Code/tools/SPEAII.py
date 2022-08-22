import random


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