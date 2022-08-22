import os
import re
from tools import Tools

# Illustration: Clean Comments for a C/C++ file
# Coder: xtangchow
# Time: 2020/8/29


def RemoveCommentsFromCode(infile):
    
    COMMAND = "g++ -fpreprocessed -dD -E %s >%s -std=c++11"
    
    filePath = '/'.join(infile.split('/')[:-1])
    outfile = os.path.join(filePath,'clean_{}'.format(filePath[-1]))
   
    try:
       
        os.system(COMMAND % (infile, outfile))
        os.remove(infile)
        os.rename(outfile, infile)
        src_content = Tools.ReadLinesFromFile(infile)
        
        src_content = src_content[1:]
       
        src_result = []
        for item in src_content:
            if not re.match("^\s*$", item):
                if 'atcoder' in item :
                    os.remove(infile)
                    return
                src_result.append(item)
        Tools.WriteLinesToFile(src_result, infile)
    except:
        print('Bug occurs when deal {}!'.format(infile))
        if os.path.exists(outfile):
            os.remove(outfile)

            



