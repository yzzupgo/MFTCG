#include<stdio.h>
int main() {
int a;
scanf("%d", &a);
if(int(1.08 * a) > 206) {
printf("Yay!\a");
} else if(int(1.08 * a) < 206) {
printf(":(\a");
} else {
printf("so-so\a");
}
return 0;
}
