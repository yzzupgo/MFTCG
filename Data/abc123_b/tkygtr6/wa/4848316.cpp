#include <stdio.h>
#define NUM 5

int main(void){
    int A[NUM];

    int sum = 0;
    int fraction = 100;

    for(int i = 0; i < NUM; i++){
        scanf("%d", &A[i]);
        sum += (A[i] / 10) * 10;
        int f = A[i] % 10;
        if(f != 0){
            if(f < fraction){
                fraction = f;
            }
            sum += 10;
        }
    }

    if(fraction == 0){
        printf("%d\n", sum);
    }else{
        printf("%d\n", sum - 10 + fraction%10);
    }

    return 0;
}
