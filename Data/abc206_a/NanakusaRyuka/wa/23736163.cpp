#include<stdio.h>
int main() {
int n = 0;
int m = 0;
scanf("%d", &n);
m = 1.08 * n;
if(206 == m) {
printf("so-so");
} else if(206 < m) {
printf("Yay!");
} else if(206 > m) {
printf(":(");
}
return 0;
}
