#include<stdio.h>
int main() {
int N, m;
scanf("%d", &N);
m = 1.08 * N;
if(m < 206) {
printf("Yay!");
} else if(m == 206) {
printf("so-so");
} else if(m > 206) {
printf(":(");
}
return 0;
}
