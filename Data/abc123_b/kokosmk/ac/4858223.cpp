#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,N;
    int s[5];
    int sum = 0;
    int check = 0;
    int loss_time = 0;
    int last = 0;

    N = 5;
    for(i = 0; i < N; i++)
    {
        scanf("%d", &s[i]);
    }
    for(i = 0; i< N; i++)
    {
        if (s[i] % 10 != 0 && 10 - s[i] % 10 > loss_time) {
            loss_time = 10 - s[i] % 10;
            last = i;
        }
    }
    for(i = 0; i < N; i++) {
        if (i != last) {
            if (s[i] % 10 != 0 ) {
                sum = sum + s[i] + 10 - s[i] % 10;
            } else {
                sum = sum + s[i];
            }
        } else {
            sum = sum + s[last];
        }
    }
    printf("%d",sum);
    return 0;
}