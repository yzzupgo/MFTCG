#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
N = (N * 108) / 100;
if(N < 206) {
printf("Yay!\n");
} else if(N == 206) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
