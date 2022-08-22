import cppTools
import SBFL
import Tools
import os
import numpy as np

def main():

    qDict = ['abc162_b', 'abc170_b', 'abc194_a', 'abc206_a']
    caseDict = [item + '__1' for item in qDict]

    for i in range(3,len(qDict)):
        waCode = 0
        result = np.zeros([5, 11])
        with open(os.path.join(Tools.BaseDir, 'Pairs', '{}.txt'.format(qDict[i]))) as fr:
            lines = fr.readlines()
            caseDir = os.path.join(Tools.BaseDir, 'TestCase',caseDict[i])
            RoutDir = os.path.join(Tools.BaseDir, 'Tmp', qDictj[i])
       
            for item in lines[:-1]:
                src = os.path.join(Tools.BaseDir, item.split(' ')[0])
                print(src)
                #print(item.split('[')[-1][:-2])
                faults = [int(line) for line in item.split('[')[-1][:-2].split(',')]
                
                itemresult, isFindFault = SBFL.SBFL_TOPN(src, caseDir, faults, RoutDir)
                if (isFindFault):
                    waCode += 1
                result += itemresult
        with open(os.path.join(Tools.BaseDir, 'result',qDict[i] + ".txt"), 'a+')as fw:
            fw.write('TOPN is {}, err is {}'.format(result, waCode))
                


if __name__ == '__main__':
    main()