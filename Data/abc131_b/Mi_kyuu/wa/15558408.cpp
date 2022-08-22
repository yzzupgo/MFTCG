#include <iostream>
#include <cstdint>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef vector<vector<ll>> vvll;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,n) for (int i = 1; i <= (n); ++i)
#define irep(it,stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i,n) for (int i = (n)-1; i >= 0; --i)
#define mes(a) cout << (a) << endl
#define dmes(a,b) cout << (a) << " " << (b) << endl
#define re0 return 0
#define mp(p,q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define rSort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T>
inline bool chmax(T &a, T b)
{
if (a < b)
{
a = b;
return 1;
}
return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
if (a > b)
{
a = b;
return 1;
}
return 0;
}
struct io
{
io()
{
ios::sync_with_stdio(false);
cin.tie(0);
}
};
const int INF = INT_MAX;
const ll LLINF = 1LL << 60;
const ll MOD = 1000000007;
const double EPS = 1e-9;
bool isPrime(ll x){
ll i;
if(x < 2)return 0;
else if(x == 2) return 1;
if(x%2 == 0) return 0;
for(i = 3; i*i <= x; i += 2) if(x%i == 0) return 0;
return 1;
}
ll gcd(ll a, ll b) {
return b ? gcd(b, a%b) : a;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
signed main(void)
{
ll n, l;
cin >> n >> l;
ll r = 0;
vll a(n);
for (ll i = 0; i < n; i++) {
a[i] = l+i+1-1;
if (a[i] == 0) {
for (ll j = 0; j < n; j++) {
r +=a[i];
}
mes(r);
re0;
}
}
if (abs(a[0]) > abs(a[n-1])) {
for (ll i = 0; i < n-1; i++) {
r +=a[i];
}
} else if (abs(a[0]) < abs(a[n-1])) {
for (ll i = 1; i < n; i++) {
r +=a[i];
}
}
mes(r);
}
