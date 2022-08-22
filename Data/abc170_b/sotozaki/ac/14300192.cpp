#include <bits/stdc++.h>
#define rep(i,n) for (ll i = 0; i < (ll)(n); ++i)
#define rep2(i,s,n) for (ll i = s; i < (ll)(n); i++)
#define repr(i,n) for (ll i = n; i >= 0; i--)
#define pb push_back
#define COUT(x) cout << (x) << endl
#define COUTF(x) cout << setprecision(15) << (x) << endl
#define ENDL cout << endl
#define DF(x) x.erase(x.begin())
#define ALL(x) x.begin(), x.end()
#define SORT(x) sort(ALL(x))
#define REVERSE(x) reverse(ALL(x))
#ifdef _DEBUG
#define debug(x) cout << "[debug] " << #x << ": " << x << endl
#else
#define debug(x)
#endif
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using P = pair<ll, ll>;
constexpr ll INF = 0x3f3f3f3f3f3f3f3f;
constexpr double PI = 3.141592653589793238462643383279;
ll getDigit(ll x) {
return x == 0 ? 1 : log10(x) + 1;
}
ll gcd(ll x, ll y) {
return y ? gcd(y, x % y) : x;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
vector<P> factorize(ll n) {
vector<P> result;
for (ll i = 2; i * i <= n; ++i) {
if (n % i == 0) {
result.pb({i, 0});
while (n % i == 0) {
n /= i;
result.back().second++;
}
}
}
if (n != 1) {
result.pb({n, 1});
}
return result;
}
template <class T>
inline bool chmin(T& a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template <class T>
inline bool chmax(T& a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
template <typename T>
void debugV(const vector<T> v) {
#ifdef _DEBUG
rep(i, v.size()) {
cout << i << ":" << v[i] << " ";
}
cout << endl;
#else
(void)v;
#endif
}
signed main() {
ll X, Y;
cin >> X >> Y;
rep(i, 200) {
ll x = i;
ll y = X - i;
if (x < 0 || y < 0) {
continue;
}
if (x + y == X && x * 2 + y * 4 == Y) {
COUT("Yes");
return 0;
}
}
COUT("No");
return 0;
}
