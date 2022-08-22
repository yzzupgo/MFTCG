#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vl = vector<ll>;
using vvl = vector<vl>;
using pl = pair<ll, ll>;
const ll INF = ll(1e18);
const ll mod = ll(1e9 + 7);
const double pi = acos(-1);
#define rep0(i,n) for(ll (i) = 0; (i) < (n); ++(i))
#define rrep0(i,n) for(ll (i) = (n) - 1; (i) >= 0; --(i))
#define rep1(i,n) for(ll (i) = 1; (i) <= (n); ++(i))
#define rrep1(i,n) for(ll (i) = (n); (i) >= 1; --(i))
#define nfor(i,a,b) for(ll (i) = (a); (i) < (b); ++(i))
#define rnfor(i,a,b) for(ll (i) = (a) - 1; (i) >= (b); --(i))
#define pf(x) cout << (x) << endl
#define all(x) (x).begin(),(x).end()
#define yes pf("Yes")
#define no pf("No")
template<class T>bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T>bool chmin(T &a, const T &b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
const int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
const int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int multipf(vector<string> &s) {
if(s.size() == 0) {
return 0;
}
cout << s[0];
rep1(i, s.size() - 1)cout << " " << s[i];
cout << endl;
return 0;
}
int multipf(vector<ll> &n) {
if(n.size() == 0) {
return 0;
}
cout << n[0];
rep1(i, n.size() - 1)cout << " " << n[i];
cout << endl;
return 0;
}
ll gcd(ll a, ll b) {
if(a < b) {
swap(a, b);
}
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
ll g = gcd(a, b);
return a / g * b;
}
ll factorial(ll n) {
ll ans = 1;
rep1(i, n) {
ans *= i;
ans %= mod;
}
return ans;
}
ll power(ll a, ll b, ll m) {
ll ans = 1;
while(b) {
if(b & 1LL) {
ans = ans * a % m;
}
ans %= m;
a = a * a;
a %= m;
b >>= 1;
}
return ans % m;
}
int main() {
int n;
cin >> n;
if(n * 108 / 100 < 206) {
pf("Yay!");
} else if(n * 108 / 100 == 206) {
pf("so-so");
} else {
pf(":(");
}
return 0;
}
