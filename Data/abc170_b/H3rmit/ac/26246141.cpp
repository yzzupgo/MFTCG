#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const long long INFL = 1e18;
const int MAX = 210000;
const int MAX_NUM = 999999999;
const int mod = 1000000007;
using ll = long long;
struct mint {
ll x;
mint(ll x=0):x((x%mod+mod)%mod){}
mint operator-() const { return mint(-x);}
mint& operator+=(const mint a) {
if ((x += a.x) >= mod) x -= mod;
return *this;
}
mint& operator-=(const mint a) {
if ((x += mod-a.x) >= mod) x -= mod;
return *this;
}
mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
mint operator+(const mint a) const { return mint(*this) += a;}
mint operator-(const mint a) const { return mint(*this) -= a;}
mint operator*(const mint a) const { return mint(*this) *= a;}
mint pow(ll t) const {
if (!t) return 1;
mint a = pow(t>>1);
a *= a;
if (t&1) a *= *this;
return a;
}
mint inv() const { return pow(mod-2);}
mint& operator/=(const mint a) { return *this *= a.inv();}
mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}
struct combination {
vector<mint> fact, ifact;
combination(int n):fact(n+1),ifact(n+1) {
assert(n < mod);
fact[0] = 1;
for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
ifact[n] = fact[n].inv();
for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
}
mint operator()(int n, int k) {
if (k < 0 || k > n) return 0;
return fact[n]*ifact[k]*ifact[n-k];
}
mint p(int n, int k) {
return fact[n]*ifact[n-k];
}
} c(1000005);
void solve() {
int x,y; cin >> x >> y;
for (int i = 0; i <= x; ++i) {
for (int j = 0; j <= x; ++j) {
if (i == 0 && j == 0) continue;
if (i + j != x) continue;
if ((i * 2) + (j * 4) == y) {
cout << "Yes" << endl;
return;
}
}
}
cout << "No" << endl;
return;
}
int main() {
solve();
return 0;
}
