#include <stdio.h>
int main() {
int N, K;
scanf("%d", &N);
K = N * 1.08;
if(K < 206) {
puts("Yay!");
} else if(K > 206) {
puts(":(");
} else {
printf("so-so");
}
return 0;
}
