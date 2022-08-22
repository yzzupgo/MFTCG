import numpy as np

def buildNewLife(n, build): 
    return np.array([build() for i in range(n)], dtype=int_)



    