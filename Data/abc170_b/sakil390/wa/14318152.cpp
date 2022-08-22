#include<bits/stdc++.h>
using namespace std;
#define l long long
#define pis acos(-1)
int main()
{
l n,m,a,b,i,j,sum = 0,mx = LONG_LONG_MIN,mn = LONG_LONG_MAX;
string str;
vector<l>v;
map<l,l>mp;
set<l>s;
cin>>n>>m;
i = 0,j = 0;
for(i = 0;i < n;i++)
{
for(j = 0;j < n;j++)
{
if(i+j<=n)
{
if(i*2+j*4==m)
{
sum = 1;
break;
}
}
}
if(sum==1)
break;
}
if(sum==1)
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
