#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (long long)(1e9+7)
#define INF (1LL<<60)
#define rep(i,n) for(ll i = 0; i < (n); i++)
#define rep1(i,n) for(ll i = 1; i <= (n); i++)
template<class T> inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
ll select(vector<ll> &a, ll k) {
for(ll l = 0, r = a.size() - 1; l <= r;) {
ll p = a[(l + r) / 2];
ll i = l - 1, j = r + 1;
while(1) {
while(a[++i] < p);
while(a[--j] > p);
if(i >= j) {
break;
}
swap(a[i], a[j]);
}
if(k == i - l) {
return a[i];
} else if(k < i - l) {
r = i - 1;
} else if(k > i - l) {
k -= (i - l + 1);
l = j + 1;
}
}
return -99999999;
}
ll gcd(ll a, ll b) {
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
ll modinv(ll a, ll m) {
ll b = m, u = 1, v = 0;
while(b) {
ll t = a / b;
a -= t * b;
swap(a, b);
u -= t * v;
swap(u, v);
}
u %= m;
if(u < 0) {
u += m;
}
return u;
}
vector<pair<ll, ll>> prim;
void pf(ll n) {
ll s = sqrt(n);
ll r = 0;
for(ll i = 2; i <= s; i++) {
if((n % i) == 0) {
r = 0;
do {
r++;
n = n / i;
} while((n % i) == 0);
prim.push_back({i, r});
}
}
if(n > s) {
prim.push_back({n, 1});
}
}
ll powmod(int a, int n) {
ll x = 1;
while(n > 0) {
if(n & 1) {
x = (x * a) % MOD;
}
a = (a * a) % MOD;
n >>= 1;
}
return x;
}
void solve() {
ll N;
cin >> N;
ll ans = N * 108 / 100;
cout << ans << endl;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
int main(void) {
solve();
}
