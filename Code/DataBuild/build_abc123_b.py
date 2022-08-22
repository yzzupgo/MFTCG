import random

def build() :
    ret = []
    for i in range(5):
        ret.append(random.randint(1, 123))
    return ret


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
            
            x = random.randint(1, 123)
  
            base[cpos] = x
            lifea[i] = base



