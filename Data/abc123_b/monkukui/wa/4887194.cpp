#include<iostream>
#include<cstdio>
using namespace std;

int main(void){
    int cockingT[5], array[5], min = 10, signum = 0, sum = 0, count = 0;

    int i;
    for(i = 0; i < 5; i++){
        scanf("%d", &cockingT[i]);
    }

    for(i = 0; i < 5; i++){
        array[i] = cockingT[i] % 10;
    }

    for(i = 0; i < 5; i++){
        if(array[i] != 0){
            if(array[i] < min){
                min = array[i];
                signum = i;
            }
        }else{
            count += 1;
        }
    }
    sum += cockingT[signum];
    
    for(i = signum + 1; i < 5; i++){
        sum += cockingT[i] + 10 - array[i];
    }
    for(i = signum - 1; i >= 0; i--){
        sum += cockingT[i] + 10 - array[i];
    }
    sum -= count * 10;
    printf("%d\n", sum);
    return 0;

}
