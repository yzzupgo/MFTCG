#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rrep(i,a,b) for(ll i=a;i>=b;--i)
#define FOR(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define PI 3.14159265358979323846
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll INF = 1e18 + 7;
const ll mod = 1e9 + 7;
const ll MAXN = 1e5 + 10;
ll poww(ll a, ll b) {
if(b < 0) {
return 0LL;
}
ll ans = 1;
while(b) {
if(b & 1) {
ans = ans * a;
}
a = a * a;
b >>= 1;
}
return ans;
}
ll binpow(ll a, ll b) {
if(b < 0) {
return 0LL;
}
if(a <= 0) {
return 0LL;
}
a %= mod;
ll ans = 1LL;
while(b) {
if(b & 1) {
ans = ans * a % mod;
}
a = a * a % mod;
b >>= 1;
}
return ans;
}
ll modinv(ll n) {
return binpow(n, mod - 2);
}
void solve() {
ll n;
cin >> n;
ld x = (ld)(1.08) * (ld)n;
ll c = x;
n = 206;
if(x < n) {
cout << "Yay!";
} else if(x == n) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
IOS;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll no_of_test_cases = 1;
for(ll i = 1; i <= no_of_test_cases; i++) {
solve();
}
return 0;
}
