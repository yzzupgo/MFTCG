#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define eb emplace_back
#define sz(x) ((x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i,a,b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a, ll b) {
return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
ll ceil(ll a, ll b) {
return ((a) + (b) - 1) / b;
}
template<class T> inline bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T> inline bool chmin(T &a, const T &b) {
if(a > b) {
a = b;
return 1;
}
return 0;
}
int main() {
double n;
cin >> n;
ll ans = floor(n * 1.08);
if(ans < 208) {
cout << "Yay!" << endl;
} else if(ans == 208) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
