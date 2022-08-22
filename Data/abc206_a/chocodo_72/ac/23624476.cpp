#include <stdio.h>
int main(void) {
int N, x;
x = 1;
scanf("%d", &N);
x = N * 1.08;
if(x < 206) {
printf("Yay!\n");
} else if(x == 206) {
printf("so-so\n");
} else if(x > 206) {
printf(":(\n");
}
return 0;
}
