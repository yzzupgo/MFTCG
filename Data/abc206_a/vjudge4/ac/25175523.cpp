#include <stdio.h>
int main() {
double N;
scanf("%lf", &N);
if(N * 1.08 < 206) {
printf("Yay!\n");
} else if(N * 1.08 > 206.28) {
printf(":(\n");
} else if(N * 1.08 == 206.28) {
printf("so-so\n");
}
return 0;
}
