#include<stdio.h>
int main()
{
long long int i,k=1,sum=0,n,a,num=0;
scanf("%lld",&n);
a=n;
while(a!=0)
{
num++;
a/=10;
}
if(num%2==1)
{
for(i=0;i<num-1;i++)
{
k*=10;
}
sum+=n-k+1;
n=k;
}
else
{
n=1;
for(i=0;i<num-2;i++)
{
n*=10;
}
num--;
sum+=n*10-n;
}
while(n!=0)
{
n/=100;
sum+=n*10-n;
}
printf("%lld",sum);
}