#include <iostream>
#include <cstring>
#include<vector>
#include <algorithm>
#include<cstdlib>
#include<set>
#include<math.h>
#include<map>
#include<unordered_map>
#include<iomanip>
#include<queue>
using namespace std;
using ll = long long;
using ull = unsigned long long;
ll amari = 1000000007;
#define rep(n,x) for(ll i=0;i<n;i++) cin>>x[i];
#define forr(a,b) for(ll i=a;i<b;i++);
#define vecsort(myVec,x,y) sort(myVec.begin(),myVec.end(),[](const vector<y> &alpha,const vector<y> &beta){return alpha[x] < beta[x];});
ll modpow(ll a, ll n, ll mod)
{
ll res = 1;
while (0 < n)
{
if (n & 1) res = res * a % mod;
a = a * a % mod;
n >>= 1;
}
return res;
}
ll gcd(ll x, ll y)
{
if (x % y == 0) return y;
else return gcd(y, x % y);
}
ll lcm(ll x, ll y)
{
return (y / gcd(x, y)) * x;
}
ll primebool(ll x)
{
for (ll i = 2; i * i <= x; i++)
{
if (x % i == 0) return 0;
}
return 1;
}
const ll MOD = amari;
vector<long long> fact_inv, inv, Com;
void init_nCk(ll n, ll SIZE) {
fact_inv.resize(SIZE + 5);
inv.resize(SIZE + 5);
fact_inv[0] = fact_inv[1] = 1;
inv[1] = 1;
for (ll i = 2; i < SIZE + 1; i++) {
inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
}
Com.resize(SIZE + 5);
Com[0] = 1;
for (ll i = 1; i < SIZE + 1; i++) {
Com[i] = Com[i - 1] * ((n - i + 1) * inv[i] % MOD) % MOD;
}
}
ll nck(ll n, ll k)
{
init_nCk(n, k);
return Com[k];
}
int main()
{
ll n, l;
cin >> n >> l;
ll t=n*(l-1)+n*(n+1)/2;
ll min = 10000000000;
ll x, y, minx;
for (ll i = 1; i <= n; i++)
{
x = l + i - 1;
y = x;
if (x < 0)
{
x = -x;
}
if (x < min)
{
min = x;
minx = y;
}
}
cout << t - minx << endl;
return 0;
}
