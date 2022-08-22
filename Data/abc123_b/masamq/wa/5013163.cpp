#include <bits/stdc++.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int data[5], div[5];
    int i, min, pos, sum;
    min = 10;
    pos = -1;
    sum = 0;
    for(i = 0;i < 5;i++){
        cin >> data[i];
        div[i] = data[i] % 10;
        if(min > div[i] && div[i] != 0){
            min = div[i];
            pos = i;
        }
    }
    // printf("%d\n", pos);
    if(pos == -1){
        // printf("%d\n", data[0]+data[1]+data[2]+data[3]+data[4]);
    }else{
        for(i = 0;i<5;i++){
            if(i != pos){
                if(data[i] % 10 != 0){
                    sum += data[i]+(10 - data[i] % 10);
                }else{
                    sum += data[i];
                }
            }else{
                sum += data[pos];
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}