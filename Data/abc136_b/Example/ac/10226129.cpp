#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <stdio.h>
#include <tuple>
#include <bitset>
#include <cfloat>
#include <fstream>
#include <limits.h>
#include <list>
#include <math.h>
#include <random>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <numeric>
#include <utility>
#include <sstream>
#include <cassert>
template<class T> inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
using namespace std;
#define int long long
#define ll long long
#define rep(i,n) for (ll i = 0; i < (n); i++)
#define P pair<ll, ll>
#define sz(x) (ll)x.size()
#define ALL(x) (x).begin(),(x).end()
#define ALLR(x) (x).rbegin(),(x).rend()
#define VE vector<ll>
#define COUT(x) cout<<(x)<<endl
#define MA map<ll,ll>
#define SE set<ll>
#define PQ priority_queue<ll>
#define PQR priority_queue<ll,VE,greater<ll>>
#define COUT(x) cout<<(x)<<endl
#define YES(n) cout << ((n) ? "YES" : "NO" ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No" ) << endl
#define EPS (1e-10)
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;
const double PI = acos(-1.0);
using Graph = vector<VE>;
ll gcd(ll a, ll b) {
if (a < b)swap(a, b);
if (b == 0) return a;
unsigned r;
while ((r = a % b)) {
a = b;
b = r;
}
return b;
}
ll lcm(ll a, ll b) {
ll g = gcd(a, b);
return a * b / g;
}
bool prime(ll n) {
for (ll i = 2; i <= sqrt(n); i++) {
if (n%i == 0)return false;
}
return n != 1;
}
map<ll, ll> prime_factor(ll n) {
map<ll, ll> ret;
for (ll i = 2; i * i <= n; i++) {
while (n % i == 0) {
ret[i]++;
n /= i;
}
}
if (n != 1) ret[n] = 1;
return ret;
}
ll MODinv(ll a, ll m) {
ll b = m, u = 1, v = 0;
while (b) {
ll t = a / b;
a -= t * b; swap(a, b);
u -= t * v; swap(u, v);
}
u %= m;
if (u < 0) u += m;
return u;
}
vector<pair<char, int>> RunLength(string s) {
if (s.size() == 0)return {};
vector<pair<char, int>>res(1, pair<char, int>(s[0], 0));
for (char p : s) {
if (res.back().first == p) {
res.back().second++;
}
else {
res.emplace_back(p, 1);
}
}
return res;
}
int GetDigit(int num) {
return log10(num) + 1;
}
int bit_count(int n) {
int cnt = 0;
while (n > 0) {
if (n % 2 == 1)cnt++;
n /= 2;
}
return cnt;
}
struct mint {
ll x;
mint(ll x = 0) :x((x%MOD + MOD) % MOD) {}
mint operator-() const { return mint(-x); }
mint& operator+=(const mint a) {
if ((x += a.x) >= MOD) x -= MOD;
return *this;
}
mint& operator-=(const mint a) {
if ((x += MOD - a.x) >= MOD) x -= MOD;
return *this;
}
mint& operator*=(const mint a) {
(x *= a.x) %= MOD;
return *this;
}
mint operator+(const mint a) const {
mint res(*this);
return res += a;
}
mint operator-(const mint a) const {
mint res(*this);
return res -= a;
}
mint operator*(const mint a) const {
mint res(*this);
return res *= a;
}
mint pow(ll t) const {
if (!t) return 1;
mint a = pow(t >> 1);
a *= a;
if (t & 1) a *= *this;
return a;
}
mint inv() const {
return pow(MOD - 2);
}
mint& operator/=(const mint a) {
return (*this) *= a.inv();
}
mint operator/(const mint a) const {
mint res(*this);
return res /= a;
}
};
struct combination {
vector<mint> fact, ifact;
combination(int n) :fact(n + 1), ifact(n + 1) {
fact[0] = 1;
for (int i = 1; i <= n; ++i) fact[i] = fact[i - 1] * i;
ifact[n] = fact[n].inv();
for (int i = n; i >= 1; --i) ifact[i - 1] = ifact[i] * i;
}
mint operator()(int n, int k) {
if (k < 0 || k > n) return 0;
return fact[n] * ifact[k] * ifact[n - k];
}
}com(10);
struct edge { ll to, cost; };
signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n; cin >> n;
int ans = 0;
for (int i = 1; i <= n; i++) {
if (GetDigit(i) % 2 == 1)ans++;
}
cout << ans << endl;
return 0;
}
