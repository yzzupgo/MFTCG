#include<stdio.h>
int main() {
int a;
scanf("%d", &a);
if(a * 1.08 < 206) {
printf("Yay!\n");
} else if(a * 1.08 > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
return 0;
}
