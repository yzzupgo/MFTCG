#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define MOD 1000000007LL
#define calc_fact(n) tgamma(n+1)
ll binpow(ll a, ll b)
{
if(b==0)return 1;
ll res=binpow(a, b/2);
res = (res*res)%MOD;
if(b%2){
res = (res*a)%MOD;
}
return res;
}
ll inv(ll n)
{
return binpow(n, MOD-2);
}
bool compare(const pair<ll,ll>&i,const pair<ll,ll>&j)
{
if(i.F!=j.F)
return i.F<j.F;
else
return i.S>j.S;
}
vi v;
void sieve(ll n)
{
vector<bool> PRIME(n+1,true);
PRIME[0]=false;PRIME[1]=false;
for(ll p=2;p*p<=n;p++)
{
if(PRIME[p]==true)
{
for(ll i=p*p;i<=n;i+=p)
{
PRIME[i]=false;
}
}
}
for(ll i=2;i<PRIME.size();i++)
{
if(PRIME[i])
v.pb(i);
}
}
signed main()
{
FIO;
ll x,y;
cin>>x>>y;
if(y<=x*4 and y>=x*2)
cout<<"Yes";
else
cout<<"No";
}
