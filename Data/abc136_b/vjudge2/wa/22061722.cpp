#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
#include<cstring>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
ll maps[100005];
int main()
{
ll a,b,c,n,k,i,p,o,ans;
ll j,l;
while(~scanf("%lld",&n))
{
ll ans=n;
o=0;
while(n)
{
n/=10;
o++;
}
p=90;
if(o%2==0)
{
p=9;l=0;
for(i=1;i<o;i++)
{
if(i%2)
l+=p;
p=p*10+9;
}
printf("%lld\n",l);
}
else
{
for(i=2;i<=o;i+=2)
{
ans-=p;
p*=100;
}
printf("%lld\n",ans);
}
}
}
