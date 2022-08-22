#include<bits/stdc++.h>
#include<math.h>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#define MAXN 200010
#define Endl '\n'
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ll long long int
#define pii pair<ll,ll>
#define all(v) v.begin(),v.end()
#define fi(x,n) for(ll i=x;i<n;i++)
#define fj(x,n) for(ll j=x;j<n;j++)
#define fk(x,n) for(ll k=x;k<n;k++)
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("Ofast","no-stack-protector")
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll exp(ll x,ll y,ll mod)
{
ll res=1;
x=x%mod;
while(y>0)
{
if(y&1)
res=(res*x)%mod;
y = y>>1;
x=(x*x)%mod;
}
return res;
}
ll modinverse(ll x,ll mod)
{
return exp(x,mod-2,mod);
}
using namespace std;
const ll inf = 0x3f3f3f3f3f3f3f3fll;
void solve()
{
ll x,y;
cin>>x>>y;
if((y%2)||(y>4*x)||(y<2*x))
cout<<"No";
else
cout<<"Yes";
}
int main()
{
fastio;
ll t;
t=1;
while(t--)
solve();
return 0;
}
