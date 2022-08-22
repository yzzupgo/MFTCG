#include<cstdio>
int main() {
double n;
scanf("%lf", &n);
if((int)(n * 1.08) < 206.0) {
printf("Yay!");
} else if((int)(n * 1.08) > 206.0) {
printf(":(");
} else {
printf("so-so");
}
}
