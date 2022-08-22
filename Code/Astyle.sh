#!/bin/bash

# Illustration: Format Code by Astyle
# Coder: xtangchow
# Time: 2020/8/29


# CodePath=$(dirname $(readlink -f "$0"))
# DataPath=$CodePath/../Data
cd $1

echo $(pwd)
for file in *;
do
    if [ -d ${file} ]; then
        cd ${file}    
        for user in $(ls $(pwd));
        do
            cd ${user}
            for status in $(ls $(pwd));
            do
                cd ${status}    
                astyle  *.cpp --style=allman --style=ansi --style=break --style=bsd -A1  --convert-tabs --indent=spaces=4 \
                --attach-closing-while --indent-switches --indent-namespaces --indent-continuation=4 \
                --indent-preproc-block --indent-preproc-define --indent-preproc-cond  \
                --indent-col1-comments --pad-oper  --unpad-paren --delete-empty-lines \
                --align-pointer=name --align-reference=name --break-elseifs --add-braces \
                --pad-comma --add-one-line-braces 
                rm *.orig
		astyle *.cpp --style=java --style=attach -A2
		rm *.orig
		cd ..
            done
            cd ..
        done
    fi
done


