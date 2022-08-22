import random

def build() :
    n = random.randint(1, 100000)

    return [n]


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
            
            random.randint(1, 100000)
         
            lifea[i] = base



