from re import subn
from tools.Tools import BaseDir
import os
from tools.ComCleaner import *
import subprocess
from tools.MakePair import *


# Illustration: Clean Comments and Format style C/C++ file
# Coder: xtangchow
# Time: 2020/8/29

def main():
    absPath = os.path.abspath('{}/Data/'.format(BaseDir))
    for root, dir, files in os.walk(absPath):
        for file in files:
            CodePath = os.path.join(root, file)
            if file.endswith('.txt'):
                NewPath  = CodePath.split('.')[0] + '.cpp'
                os.rename(CodePath, NewPath)
                CodePath = NewPath
            print(CodePath)
            RemoveCommentsFromCode(CodePath)
  
    AstyleScriptPath = os.path.join(BaseDir, 'Code', 'Astyle.sh' )
    os.system('bash {} {}'.format(AstyleScriptPath, os.path.join(BaseDir, 'Data')))
    for question in os.listdir('{}/Data'.format(BaseDir)):
        MakePair(question)

    

if __name__ == '__main__':
    main()

       


