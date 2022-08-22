import random

def build() :
    n = random.randint(-100, 100)
    m = random.randint(-100, 100)
    return [n, m]


def cross(lifea, lifeb, rate):
    for i in range(len(lifea)):
        tmpRate = random.random()
        if(tmpRate <= rate) :
            tmpb = lifeb[i]
            lifeb[i] = lifea[i]
            lifea[i] = tmpb
 
    


def mutation(lifea, rate):
    for i in range(len(lifea)):
        tmpRate = random.random()
        if(tmpRate <= rate):


            cpos = random.randint(0, len(lifea[i]) - 1)
        
            base = lifea[i][:]
            random.randint(-100, 100)
    
            base[cpos] = x
            lifea[i] = base



