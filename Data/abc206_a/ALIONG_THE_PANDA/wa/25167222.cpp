#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
if(1.08 * n < 206) {
printf("Yay!\n");
} else if(1.08 * n > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
return 0;
}
