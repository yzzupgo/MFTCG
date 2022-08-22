#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if((n * 108) / 100 < 206) {
printf("Yay!");
} else if((n * 108) / 100 > 206) {
printf(":(");
} else if((n * 108) / 100 == 206) {
printf("so-so");
}
}
