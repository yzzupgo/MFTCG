#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if(n * 1.08 < 206) {
printf("Yay!");
} else if(n * 1.08 > 206) {
printf(":(");
} else if(n * 1.08 == 206) {
printf("so-so");
}
}
