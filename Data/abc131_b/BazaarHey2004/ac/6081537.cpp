#include "bits/stdc++.h"
#define INF 0x7fffffff
using namespace std;
int main()
{
int n,l;
int i,tmp;
long long sum=0,min=INF,mini;
scanf("%d %d",&n,&l);
for(i=1;i<=n;i++)
{
tmp=l+i-1;
sum+=tmp;
if(abs(tmp)<=min)
{
min=abs(tmp);
mini=tmp;
}
}
printf("%lld\n",sum-mini);
return 0;
}
