#include "bits/stdc++.h"
#define INF 0x7fffffff
using namespace std;
int main()
{
int n,l;
int i,tmp;
long long sum=0,min=INF;
scanf("%d %d",&n,&l);
for(i=1;i<=n;i++)
{
tmp=l+i-1;
sum+=tmp;
if(abs(tmp)<=min)
{
min=abs(tmp);
}
}
printf("%lld\n",sum-min);
return 0;
}
