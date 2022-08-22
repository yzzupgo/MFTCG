#include<stdio.h>
#include<math.h>
int main()
{
long long n,i,z,sum=0;
long long a[6]={0,10,100,1000,10000,100000};
long long b[7]={9,0,900,0,9000,0};
scanf("%lld",&n);
for(i=0;i<6;i++)
{
if(n>=a[i]&&n<=a[i+1])
{
z=i;
break;
}
}
if(z%2==0)
{
sum+=n-a[z]+1;
for(i=0;i<=z;i++)
{
sum+=b[i];
}
}
else
{
for(i=0;i<z;i++)
{
sum+=b[i];
}
}
printf("%lld\n",sum);
}
