#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 1000000007
#define fr first
#define sc second
#define eps 1e-9
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define sni(x) scanf("%d",&x)
#define snl(x) scanf("%lld", &x)
#define snc(x) scanf("%c", &c);
#define rep(n) for(int i = 0 ; i < n ;i ++)
#define repc(i,n) for(int i = 0 ; i < n ; i ++)
#define FOR(i,x,y) for(int i = x ; i < y ; i ++)
#define DEC(i,x,y) for(int i = x ; i >= y ; i --)
#define all(v) v.begin(), v.end()
#define min3(a,b,c) min(a, min(b,c))
#define max3(a,b,c) max(a, max(b, c))
#define alla(a,n) a, a+n
using namespace std;
double pi=3.1415926535897932384626433;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
ll MOD=1000000007;
ll C[2005][2005];
ll min(ll a,ll b)
{
return a<b?a:b;
}
ll pw(ll a,ll b){
if(b==0) return 1;
ll x=pw(a,b/2);
x=(x*x)%MOD;
if(b%2) x=(x*a)%MOD;
return x%MOD;
}
ll comb2(ll n,ll k, ll x)
{
ll res = 1LL;
if ( k > n - k )
k = n - k;
for (int i = 0; i < k; ++i)
{
res = (res%MOD*(n - i)%MOD)%MOD;
res =(res%MOD* pw((i + 1),MOD-2)%MOD)%MOD;
}
return res%MOD;
}
void comb(ll n, ll k)
{
ll i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= min(i, k); j++)
{
if (j == 0 || j == i)
C[i][j] = 1LL;
else
C[i][j] = (C[i-1][j-1]%MOD + C[i-1][j]%MOD)%MOD;
}
}
}
ll phi(ll n)
{
ll result = n;
for (ll p = 2; p * p <= n; ++p) {
if (n % p == 0) {
while (n % p == 0)
n /= p;
result -= result / p;
}
}
if (n > 1)
result -= result / n;
return result;
}
ll cc(ll n)
{
switch (n & 3) {
case 0:
return n;
case 1:
return 1;
case 2:
return n + 1;
case 3:
return 0;
}
}
ll pp(string s)
{
reverse(s.begin(),s.end());
int res=0;
for(int i=0;i<s.length();i++)
res+=(s[i]-'0')*pow(10,i);
return res;
}
ll check(ll c)
{
ll cc=0;
while(c)
{
cc++;
c/=10;
}
return cc;
}
void solve()
{
std::ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
ll t;
ll x,y;
cin>>x>>y;
ll flg=0;
for(ll i=1;i<x;i++)
{
if(i*2+4*(x-i)==y)
{
flg=1;
}
}
if(flg)
cout<<"Yes";
else
cout<<"No";
}
int main(){
std::ios::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
solve();
}
