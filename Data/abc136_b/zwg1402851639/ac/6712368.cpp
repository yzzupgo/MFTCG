#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100;
const int INF=1e9+7;
const ll LINF=1e18;
int main()
{
int t1;
cin>>t1;
int ans=0,z=1;
z=10;
int t=9;
while (t1>=z)
{
ans+=t;
t*=100;
z*=100;
}
z/=10;
if (t1>=z)
{
ans+=t1-z+1;
}
cout<<ans<<endl;
return 0;
}
