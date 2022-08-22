#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
if(int(1.08 * n) < 206) {
printf("Yay!");
} else if(int(1.08 * n) > 206) {
printf(":(");
} else {
printf("so-so");
}
return 0;
}
