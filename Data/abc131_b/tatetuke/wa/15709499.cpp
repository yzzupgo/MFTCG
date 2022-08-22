#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
#include<cstdlib>
#include<cmath>
#include<numeric>
#include<iomanip>
#include<functional>
#include<cstdlib>
#include<queue>
#include<deque>
const double PI = acos(-1);
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll =long long;
const int mod = 1000000007;
class mint {
long long x;
public:
mint(long long x = 0) : x((x% mod + mod) % mod) {}
mint operator-() const {
return mint(-x);
}
mint& operator+=(const mint & a) {
if ((x += a.x) >= mod) x -= mod;
return *this;
}
mint & operator-=(const mint & a) {
if ((x += mod - a.x) >= mod) x -= mod;
return *this;
}
mint & operator*=(const mint & a) {
(x *= a.x) %= mod;
return *this;
}
mint operator+(const mint & a) const {
mint res(*this);
return res += a;
}
mint operator-(const mint & a) const {
mint res(*this);
return res -= a;
}
mint operator*(const mint & a) const {
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
return pow(mod - 2);
}
mint& operator/=(const mint & a) {
return (*this) *= a.inv();
}
mint operator/(const mint & a) const {
mint res(*this);
return res /= a;
}
friend ostream& operator<<(ostream & os, const mint & m) {
os << m.x;
return os;
}
};
int ctoi(char c) {
if (c >= '0' && c <= '9') {
return c - '0';
}
return 0;
}
ll gcd(ll a, ll b) {
if (a % b == 0) {
return b;
}
else {
return gcd(b, a % b);
}
}
ll lcm(ll a, ll b) {
return a * b / gcd(a, b);
};
int main() {
ll n, L;
cin >> n >> L;
ll ans=0;
int m=100000000;
rep(i, n) {
ans += L + i;
m = min((int)labs(L + i), m);
}
cout << ans - m;
}
