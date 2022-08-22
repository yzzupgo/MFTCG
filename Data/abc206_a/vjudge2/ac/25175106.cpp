#include <stdio.h>
int main() {
int a;
scanf("%d", &a);
if((a * 108) / 100 < 206) {
printf("Yay!");
} else if((a * 108) / 100 == 206) {
printf("so-so");
} else if((a * 108) / 100 > 206) {
printf(":(");
}
return 0;
}
