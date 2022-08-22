#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ppll pair<ll,pair<ll,ll>>
#define pll pair<ll,ll>
#define rep(i,x,y) for(ll i=x;i<=y;i++)
#define inf 1e16
#define imin INT_MIN
#define imax INT_MAX
#define pb push_back
#define pf push_front
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vvb vector<vector<bool>>
#define vb vector<bool>
int mod =1e9+7;
bool comp(pair<int,int> a,pair<int,int> b)
{
if(a.second == b.second) return a.first<b.first;
return a.second<b.second;
}
ll fac(ll n)
{
return n<=1?1:(n*fac(n-1))%mod;
}
ll ncr(ll n,ll r)
{
return fac(n)/(fac(r)*fac(n-r));
}
bool isPrime(ll n)
{
if(n<2) return false;
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0) return false;
}
return true;
}
int main(){
cin.tie(0);
cout.tie(0);
ios::sync_with_stdio();
ll x,y;
cin>>x>>y;
bool flag = 0;
rep(i,1,x)
{
if(i*4 + (x-i)*2 == y){ flag=1; break;}
}
rep(i,1,x)
{
if(i*2 + (x-i)*4 == y){ flag=1; break;}
}
if(flag) cout<<"Yes\n";
else cout<<"No\n";
return 0;
}
