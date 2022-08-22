#pragma GCC optimize("Ofast")
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <stack>
#include <deque>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using Po = pair<double, double>;
template <class T>
using V = vector<T>;
template <class T>
using VV = V<V<T>>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=ll(a);i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=ll(a);i>=ll(b);i--)
#define PB push_back
#define MP make_pair
#define SZ(x) ll(x.size())
#define ALL(x) x.begin(),x.end()
#define NIL -1
#define INF 1ll<<63-1
#define PI 3.14159265358979323846
#define endl "\n"
#define EPS 1e-9
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
template <class T, class U>
bool chmin(T& t, const U& u) {
if (t > u) {
t = u;
return true;
}
else return false;
}
template <class T, class U>
bool chmax(T& t, const U& u) {
if (t < u) {
t = u;
return true;
}
else return false;
}
bool YN(bool b) {
if (b)Yes;
else No;
return true;
}
ll modpow(ll a, ll n, ll mod) {
ll res = 1;
while (n > 0) {
if (n & 1) res = res * a % mod;
a = a * a % mod;
n >>= 1;
}
return res;
}
signed main() {
ll x, y; cin >> x >> y;
if (y % 2 == 0 && 2 * x <= y && y <= 4 * y) {
Yes;
}
else No;
}
