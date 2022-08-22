#include<cstdio>
int main() {
double n;
scanf("%lf", &n);
if((int)(n * 1.08) < 206) {
printf("Yay!");
}
if((int)(n * 1.08) > 206) {
printf(":(");
} else {
printf("so-so");
}
}
