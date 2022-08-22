#include<stdio.h>
int main(void)
{
int a,b,x,y,z,k;
scanf("%d %d %d",&a,&b);
x=a+b;
y=a-b;
z=a*b;
k=0;
if(x>k)k=x;
if(y>k)k=y;
if(z>k)k=z;
printf("%d\n",k);
return 0;
}
