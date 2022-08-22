#include "bits/stdc++.h"
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef pair<ll, ll> P;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const long long mod = 1e9 + 7;
ll gcd(ll a, ll b) {
return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
ll powMod(ll n, ll k, ll m) {
if (k == 0) {
return 1;
} else if (k % 2 == 1) {
return powMod(n, k - 1, m) * n % m;
} else {
ll t = powMod(n, k / 2, m);
return t * t % m;
}
}
int main() {
ll x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
for (int j = 0; j+i <= x; j++) {
int t = i*2;
int k = j*4;
if (t + k == y && i+j==x) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
