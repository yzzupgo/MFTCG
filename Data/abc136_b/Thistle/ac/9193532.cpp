#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<random>
#include<functional>
#include<algorithm>
#include<stack>
#include<cstdio>
#include<cstring>
#include<bitset>
#include<unordered_map>
#include<climits>
#include<fstream>
#include<time.h>
#include<cassert>
#include<functional>
#include<numeric>
#include <tuple>
using namespace std;
#define ll long long
#define ld long double
#define int long long
#define all(a) (a).begin(),(a).end()
#define EPS (1e-13)
#define fs first
#define sc second
#define xx first
#define yy second.first
#define zz second.second
#define H pair<int, int>
#define P pair<int, pair<int, int>>
#define Q(i,j,k) mkp(i,mkp(j,k))
#define rep(i,n) for(int (i) = 0 ; (i) < (n) ; (i)++)
#define mkp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define crdcomp(b) sort(all((b)));(b).erase(unique(all((b))),(b).end())
#define ssp(i,n) (i==n-1?"\n":" ")
#define tpop(p) p.top();p.pop()
const int mod = 1e9 + 7;
const int Mod = 998244353;
const ll Inf = 3 * 1e18;
const int inf = 15 * 1e8;
ll read() {
ll u, k = scanf("%lld", &u);
return u;
}
ll gcd(ll i, ll j) {
if (i > j) swap(i, j);
if (i == 0) return j;
return gcd(j % i, i);
}
ll mod_pow(ll x, ll n, ll p) {
ll res = 1;
while (n > 0) {
if (n & 1) res = res * x % p;
x = x * x % p;
n >>= 1;
}
return res;
}
ll bitcount(ll x) {
int sum = 0;
for (int i = 0; i < 20; i++)
if ((1ll << i) & x) sum++;
return sum;
}
signed main() {
int n;
cin >> n;
int t = 1, ans = 0;
while (t <= n) {
for (int i = t; i <= n && i < t * 10; i++) {
ans++;
}
t *= 100;
}
cout << ans << endl;
}
