#include <stdio.h>
int main(void)
{
int a, b, wa, sa, seki;
scanf("%d %d", &a, &b);
wa = a + b;
sa = a - b;
seki = a * b;
if(wa > sa && wa > seki){
printf("%d", wa);
}
else if(sa > wa && sa > seki){
printf("%d", sa);
}
else if(seki > wa && seki > sa){
printf("%d", seki);
}
return 0;
}
