import os
import sys

from numpy import fabs

    
myDir = os.path.abspath(__file__)

BaseDir = '/'.join(myDir.split('/')[:-3])
def ReadStrFromFile(infile):
    try:
        with open(infile, 'r', encoding = 'utf-8') as fr:
            src = fr.read()
            return src
    except :
        print(infile + ' open fail')
        return ""

def ReadLinesFromFile(infile):
    try:
        with open(infile, 'r', encoding = 'utf-8') as fr:
            lines = fr.readlines()
            
            for i in range(len(lines)):
                lines[i] = lines[i].strip()
            return lines
    except :
        print(infile + ' open fail')
        return []


def WriteStrToFile(src, outfile):
    try:
        with open(outfile, 'w', encoding = 'utf-8') as fw:
            fw.write(src)
    except:
        print(outfile + ' write fail')
        return

def WriteLinesToFile(lines, outfile):
    try:
        with open(outfile, 'w', encoding = 'utf-8') as fw:
            for i in range(len(lines)):
                lines[i] += '\n'
            fw.writelines(lines)
    except:
        print(outfile + ' write fail')
        return

def mkdir(file):
    if not os.path.exists(file):
        os.mkdir(file)

def CompareFile(target, base):
    targetFile = ReadStrFromFile(target).strip()
    baseFile = ReadStrFromFile(base).strip()
    if targetFile == baseFile and len(baseFile) != 0:
        return True
    else:
        return False






