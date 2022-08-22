#include<stdio.h>
int main()
{
int i,j,n,a[100000],z;
scanf("%d",&n);
if(n>=0&&n<=99)
{
printf("9\n");
}
else if(n>=100&&n<=9999)
{
if(n<=999)
{
z = (n-100)+10;
printf("%d\n",z);
}
else if(n>999)
{
printf("909");
}
}
else if(n>=10000&&n<=100000)
{
if(n<=99999)
{
z = 909 + (n-10000);
printf("%d\n",z);
}
else if(n==100000)
{
printf("90909\n");
}
}
}
