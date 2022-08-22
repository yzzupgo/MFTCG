#include <stdio.h>
int main() {
double X, N;
int Y;
scanf("%lf", &N);
if(N > 0 && N <= 300) {
X = N * 1.08;
Y = X;
if(Y < 206) {
printf("Yay!\n");
} else if(Y > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
}
}
