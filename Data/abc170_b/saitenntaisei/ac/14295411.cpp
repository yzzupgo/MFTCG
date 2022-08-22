#include<math.h>
#include<deque>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
#include<set>
#include<cmath>
#include<tuple>
#include<string>
#include<chrono>
#include<functional>
#include<iterator>
#include<random>
#include<unordered_set>
#include<array>
#include<map>
#include<iomanip>
#include<assert.h>
#include<bitset>
#include<stack>
#include<memory>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long ll;
#define rad_to_deg(rad) (((rad)/2/M_PI)*360)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i,n) for(int i=0;i<n;i++)
#define show(s) cout<<s<<endl
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
#define LINF (1LL << 50)
#define MOD (1e9+7)
#define rep1(i,n) for(int i =1;i<=n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;--i)
typedef pair < ll, ll> P;
ll gcd(ll a, ll b) {
if (b == 0) return a;
return gcd(b, a % b);
}
ll lcd(ll a, ll b) {
if (b == 0) return a;
return (a / gcd(a, b)) * b;
}
vector<int> divnum(ll num) {
int dig;
vector<int>p;
while (num) {
dig = num % 10;
p.push_back(dig);
num /= 10;
}
return p;
}
int digiter(ll num) {
int dig;
vector<int>p;
while (num) {
dig = num % 10;
p.push_back(dig);
num /= 10;
}
return p.size();
}
vector<int> convertstring(string s) {
vector<int> d;
ll n = s.size();
rep(i, n) {
d.push_back(s[i] - '0');
}
return d;
}
map< ll, int > prime_factor(ll n) {
map< ll, int > ret;
for (ll i = 2; i * i <= n; i++) {
while (n % i == 0) {
ret[i]++;
n /= i;
}
}
if (n != 1) ret[n] = 1;
return ret;
}
vector<ll> divisor(ll n) {
vector<ll>res;
for (ll i = 1; i * i <= n; i++) {
if (n % i != 0)continue;
res.push_back(i);
if (i * i != n)res.push_back(n / i);
}
return res;
}
ll myPow(ll x, ll n, ll m) {
if (n == 0)
return 1;
if (n % 2 == 0)
return myPow(x * x % m, n / 2, m);
else
return x * myPow(x, n - 1, m) % m;
}
std::vector<int> Eratosthenes(const int N)
{
std::vector<bool> is_prime(N + 1);
for (int i = 0; i <= N; i++)
{
is_prime[i] = true;
}
std::vector<int> P;
for (int i = 2; i <= N; i++)
{
if (is_prime[i])
{
for (int j = 2 * i; j <= N; j += i)
{
is_prime[j] = false;
}
P.emplace_back(i);
}
}
return P;
}
const ll mod = MOD;
struct mint {
ll x;
mint(ll x = 0) :x((x% mod + mod) % mod) {}
mint operator-() const { return mint(-x); }
mint& operator+=(const mint a) {
if ((x += a.x) >= mod) x -= mod;
return *this;
}
mint& operator-=(const mint a) {
if ((x += mod - a.x) >= mod) x -= mod;
return *this;
}
mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this; }
mint operator+(const mint a) const { return mint(*this) += a; }
mint operator-(const mint a) const { return mint(*this) -= a; }
mint operator*(const mint a) const { return mint(*this) *= a; }
mint pow(ll t) const {
if (!t) return 1;
mint a = pow(t >> 1);
a *= a;
if (t & 1) a *= *this;
return a;
}
mint inv() const { return pow(mod - 2); }
mint& operator/=(const mint a) { return *this *= a.inv(); }
mint operator/(const mint a) const { return mint(*this) /= a; }
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x; }
ostream& operator<<(ostream& os, const mint& a) { return os << a.x; }
struct combination {
vector<mint> fact, ifact;
combination(ll n) :fact(n + 1), ifact(n + 1) {
assert(n < mod);
fact[0] = 1;
for (ll i = 1; i <= n; ++i) fact[i] = fact[i - 1] * i;
ifact[n] = fact[n].inv();
for (ll i = n; i >= 1; --i) ifact[i - 1] = ifact[i] * i;
}
mint operator()(ll n, ll k) {
if (k < 0 || k > n) return 0;
return fact[n] * ifact[k] * ifact[n - k];
}
}comb(1000005);
mint f(ll n, ll k) {
if (n < 0) return 0;
mint res = comb(n, k);
res *= comb.fact[k];
return res;
}
int par[int(0x7ffffff)];
int Rank[int(0x7ffffff)];
void init(int n) {
for (int i = 0; i < n; i++) {
par[i] = i;
Rank[i] = 0;
}
}
int find(int x) {
if (par[x] == x) {
return x;
}
else {
return par[x] = find(par[x]);
}
}
void unite(int x, int y) {
x = find(x);
y = find(y);
if (x == y)return;
if (Rank[x] < Rank[y]) {
par[x] = y;
}
else {
par[y] = x;
if (Rank[x] == Rank[y])Rank[x]++;
}
}
bool same(int x, int y) {
return find(x) == find(y);
}
int X, Y;
int32_t main() {
cin >> X >> Y;
if (Y % 2 != 0) {
cout << "No" << endl;
return 0;
}
rep(kame, X+1) {
int res = Y - kame * 4;
res /= 2;
if (res + kame == X) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
