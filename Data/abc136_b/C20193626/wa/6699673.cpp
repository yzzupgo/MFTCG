#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int n,x,ans;
int main()
{
scanf("%d",&n);
for(int i=1;i<=9;i++)
if(x<=n)
ans++;
for(int i=1;i<=9;i++)
for(int j=0;j<=9;j++)
for(int k=0;k<=9;k++)
{
x=100*i+10*j+k;
if(x<=n)
ans++;
if(x>n)
break;
}
for(int i=1;i<=9;i++)
for(int j=0;j<=9;j++)
for(int k=0;k<=9;k++)
for(int l=0;l<=9;l++)
for(int t=0;t<=9;t++)
{
x=10000*i+1000*j+100*k+10*l+t;
if(x<=n)
ans++;
if(x>n)
break;
}
printf("%d\n",ans);
return 0;
}
