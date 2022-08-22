import os
import numpy as np
from Tools import *
sys.setrecursionlimit(100000)
# Illustration: Make Pair for a wrong commit and a ac commit
# Coder: xtangchow
# Time: 2020/8/29


#calculate the Hash value for a string 
def getHashFromStr(s):
    hashVal = 0
    MOD = 1 << 31
    s = s.strip()
    for item in s:
        hashVal *= 163729
        hashVal += ord(item)
        hashVal %= MOD

    return hashVal

# Match two array by LCS
def getMaxMatch(arr1, arr2):
    dp = np.zeros((len(arr1) + 1, len(arr2) + 1), dtype=int)
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1])
            if arr1[i] == arr2[j] :
                dp[i + 1][j + 1] = max(dp[i][j] + 1, dp[i + 1][j + 1])
    return dp[len(arr1)][len(arr2)]

#Find the Path for LCS
def dfs(i, j, Path, walker):
    if i == 0 or j == 0:
        return
    if walker[i][j] == 3:
        dfs(i - 1, j - 1, Path, walker)
        Path.append(i)
    elif walker[i][j] == 2 :
        dfs(i, j - 1, Path, walker)
    elif walker[i][j] == 1 :
        dfs(i - 1, j, Path, walker)
    
def getDpPath(arr1, arr2):
    dp = np.zeros((len(arr1) + 1, len(arr2) + 1), dtype=int)
    walker = np.zeros((len(arr1) + 1, len(arr2) + 1), dtype=int)
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if dp[i][j + 1] >= dp[i + 1][j]:
                walker[i + 1][j + 1] = 1
                dp[i + 1][j + 1] =  dp[i][j + 1]
            else :
                walker[i + 1][j + 1] = 2
                dp[i + 1][j + 1] =  dp[i + 1][j]
            if arr1[i] == arr2[j] and dp[i][j] + 1 >= dp[i + 1][j + 1]:
                dp[i + 1][j + 1] = dp[i][j] + 1
                walker[i + 1][j + 1] = 3
    Path = []
    dfs(len(arr1), len(arr2), Path, walker)
    return Path    

#Find all code pairs for a question
#It will be recognized a pair that the different lines of two code is less to 3 
#Specially, we will ignore when a wrong code only add lines to become a ac code  
def MakePair(question):
    ResultPath = os.path.join(BaseDir, 'Pairs', '{}.txt'.format(question))
    with open(ResultPath, 'w+', encoding='utf-8') as fw:
        Userpath = os.path.join(BaseDir, 'Data', question)
        for user in os.listdir(Userpath):
            HistoryPath = os.path.join(Userpath, user)
            AcPath = os.path.join(HistoryPath, 'ac')
            AcCodes = []
            AcCodesPath = []
            for acCommit in os.listdir(AcPath):
                CodePath = os.path.join(AcPath, acCommit)
                code = ReadLinesFromFile(CodePath)
                CodeHashVal = [getHashFromStr(item) for item in code]
                AcCodes.append(CodeHashVal)
                AcCodesPath.append(CodePath)
            WaPath = os.path.join(HistoryPath, 'wa')
           
            for waCommit in os.listdir(WaPath):
              
                matchingDegree = []
                CodePath = os.path.join(WaPath, waCommit)            
                code = ReadLinesFromFile(CodePath)
                print(CodePath)
                CodeHashVal = [getHashFromStr(item) for item in code]
                for acCommitCode in AcCodes:
                    matchingDegree.append(getMaxMatch(CodeHashVal, acCommitCode))
                matchingDegree = np.array(matchingDegree)
                if(len(matchingDegree)):

                    maxPosition = np.argmax(matchingDegree)
                else:
                    continue

                if len(CodeHashVal) - matchingDegree[maxPosition] <= 3 and len(CodeHashVal) != matchingDegree[maxPosition]:
                    faultLines = []
                    WalkPath = getDpPath(CodeHashVal, AcCodes[maxPosition])
                    for num in range(1, len(CodeHashVal) + 1):
                        if num not in WalkPath:
                            faultLines.append(num)
                    faultLines = str(faultLines)
                    fw.write('{} {} {} {} {}\n'.format(CodePath, AcCodesPath[maxPosition], 
                    len(CodeHashVal), matchingDegree[maxPosition], faultLines))

if __name__ == '__main__':
    MakePair('abc170_b')