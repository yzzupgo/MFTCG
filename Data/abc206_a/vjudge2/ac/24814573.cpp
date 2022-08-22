#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
if(n * 1.08 < 206) {
printf("Yay!\n");
} else if(n * 1.08 < 207) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
