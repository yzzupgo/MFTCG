#include<stdio.h>
int main() {
int a;
scanf("%d", &a);
if(int(1.08 * a) < 206) {
printf("Yay!\n");
} else if(int(1.08 * a) > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
return 0;
}
