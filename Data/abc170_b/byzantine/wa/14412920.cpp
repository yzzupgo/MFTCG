#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=998244353;
bool sortbysec(const pair<int,int> &a,
const pair<int,int> &b)
{
return (a.second < b.second);
}
ll mul(ll a, ll b)
{
return ((a%mod)*(b%mod))%mod;
}
ll add(ll a, ll b)
{
return ((a%mod)+(b%mod))%mod;
}
ll sub(ll a, ll b)
{
return ((a%mod)-(b%mod)+mod)%mod;
}
ll po(ll a, ll b)
{
if(b==0)
{
return 1;
}
ll t=po(a,b/2);
if(b%2)
{
return mul(t,mul(t,a));
}
else
{
return mul(t,t);
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll x,y;
cin>>x>>y;
if(y/x >=2 && y/x<=4 && y%2==0)
{
cout<<"Yes\n";
}
else
{
cout<<"No\n";
}
}
