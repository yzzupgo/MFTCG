int large(int a, int b, int c)
{
int x[5];
x[0]=a;
x[1]=b;
x[2]=c;
int max=x[0];
for(int i=1;i<3;i++){
if(max<x[i]) max=x[i];
}
return max;
}
#include<stdio.h>
int main()
{
int a,b,sum,sub,mul;
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
int l=large(sum,sub,mul);
printf("%d\n",l);
}
