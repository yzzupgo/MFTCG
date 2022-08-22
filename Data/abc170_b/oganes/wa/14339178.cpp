#include<stdio.h>
int main(void) {
int x, y;
scanf("%d %d", &x, &y);
float kame;
kame = (y - 2*x) / 2.f;
if ((kame>=0)&&(kame == (int)kame)) {
printf("Yes");
}
else {
printf("No");
}
return 0;
}
