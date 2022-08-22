#include<stdio.h>
int main() {
int N;
scanf("%d", &N);
if(int(1.08 * N) < 206) {
printf("Yay!");
} else if(int(1.08 * N) > 206) {
printf(":(");
} else {
printf("so-so");
}
return 0;
}
