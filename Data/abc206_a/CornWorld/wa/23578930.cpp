#include <cstdio>
int n;
double x;
int main() {
scanf("%d", &n);
x = n * 1.08;
if(x > 206) {
printf("Yey!");
} else if(x == 206) {
printf("so-so");
} else {
printf(":(");
}
return 0;
}
