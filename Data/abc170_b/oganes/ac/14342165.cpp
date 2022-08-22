#include<stdio.h>
int main(void) {
int x, y;
scanf("%d %d", &x, &y);
float kame,turu;
kame = (y - 2*x) / 2.f;
turu = (4 * x - y) / 2.f;
if (((turu >= 0) && (turu == (int)turu))&&((kame>=0)&&(kame == (int)kame))) {
printf("Yes");
}
else {
printf("No");
}
return 0;
}
