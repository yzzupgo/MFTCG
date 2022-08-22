#include <stdio.h>
int main(void)
{
int a, b, wa, sa, seki;
scanf("%d %d", &a, &b);
wa = a + b;
sa = a - b;
seki = a * b;
if(wa < sa){
if(sa < seki){
printf("%d", seki);
}
printf("%d", sa);
}
if(wa < seki){
if(seki < sa){
printf("%d", sa);
}
printf("%d", seki);
}
else{
printf("%d", wa);
}
return 0;
}
