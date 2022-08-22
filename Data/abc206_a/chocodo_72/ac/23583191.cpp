#include <stdio.h>
int main() {
double price = 0;
scanf("%lf", &price);
int a = price * 1.08;
if(a < 206) {
printf("Yay!\n");
}
if(a == 206) {
printf("so-so\n");
}
if(a > 206) {
printf(":(\n");
}
}
