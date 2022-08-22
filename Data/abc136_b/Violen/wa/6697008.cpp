#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int n,ans;
scanf("%d",&n);
if(n<10)
{
ans=n;
}
if(n>=10&&n<100)
{
ans=9;
}
if(n>=100&&n<1000)
{
ans=9+n-100+1;
}
if(n>=1000&&n<10000)
{
ans=909;
}
if(n>=10000&&n<=100000)
{
ans=909+n-10000+1;
}
if(n>100000)
{
ans=90909;
}
printf("%d",ans);
}
