#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
if(1.08 * n < 206) {
printf("Yay!");
} else if(1.08 * n > 206 && 1.08 * n < 207) {
printf("so-so");
} else {
printf(":(");
}
return 0;
}
