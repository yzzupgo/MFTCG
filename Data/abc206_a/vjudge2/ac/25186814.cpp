#include<stdio.h>
int main() {
int N;
scanf("%d", &N);
if(int(N * 1.08) < 206) {
printf("Yay!");
} else if(int(N * 1.08) > 206) {
printf(":(");
} else if(int(N * 1.08) == 206) {
printf("so-so");
}
return 0;
}
