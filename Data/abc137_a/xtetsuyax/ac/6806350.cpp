#include<stdio.h>
int main(void)
{
int a,b,x,y,z,k;
scanf("%d %d",&a,&b);
x=a+b;
y=a-b;
z=a*b;
k=x;
if(y>k)k=y;
if(z>k)k=z;
printf("%d\n",k);
return 0;
}
