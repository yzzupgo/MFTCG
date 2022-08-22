#include<stdio.h>
int main() {
int N, M;
scanf("%d", &N);
M = (1.08 * 2 * N);
if(M / 2 == 206) {
printf("so-so");
} else if(M < 206) {
printf("Yay!");
} else if(M > 206) {
printf(":(");
}
return 0;
}
