#include<stdio.h>
int main(void)
{
int A,B,sum1,sum2,sum3,max;
scanf("%d",&A);
scanf("%d",&B);
sum1=A+B;
sum2=A-B;
sum3=A*B;
max=sum1;
if(max<sum2)
max=sum2;
if(max<sum3)
max=sum3;
printf("%d",max);
return 0;
}
