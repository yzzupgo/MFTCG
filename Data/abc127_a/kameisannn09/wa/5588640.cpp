#include<stdio.h>
int main(void) {
int a, b, c;
int hako[10000];
int ans = 0;
int i, j;
scanf("%d", &a);
scanf("%d", &b);
if (a >= 15) {
printf("%d\n",b);
}
else if(a<25&&a>=6){
printf("%d\n", b / 2);
}
else {
printf("0\n");
}
return 0;
}
