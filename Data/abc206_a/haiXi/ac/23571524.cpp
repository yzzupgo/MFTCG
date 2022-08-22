#ifdef _LOCAL
#define _GLIBCXX_DEBUG
#endif
#ifdef _DEBUG
#define bug(x) cout<<'['<<#x<<'='<<x<<']'<<"\n";
#else
#define bug(x)
#endif
#include <bits/stdc++.h>
using namespace std;
#pragma region macros
using str = string;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vc = vector<char>;
using vb = vector<bool>;
using pl = pair<ll, ll>;
using ml = map<ll, ll>;
using sl = set<ll>;
template<class T> using V = vector<T>;
template<class T, class U> using P = pair<T, U>;
#define FOR(n) for(ll i=0;i<n;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define reps(i,n) for(ll i=1;i<n;i++)
#define REP(i,m,n) for(ll i=m;i<n;i++)
#define drep(i,n) for(ll i=n-1;i>=0;i--)
#define fore(n) for(auto&& e1:n)
#define fors(n) for(auto&&[e1,e2]:n)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sor(v) sort(all(v))
#define rsor(v) sort(rall(v))
#define rev(v) reverse(all(v))
#define low(v,x) lower_bound(all(v),x)-v.begin()
#define up(v,x) upper_bound(all(v),x)-v.begin()
#define acc(v) accumulate(all(v),0LL)
#define ef(x) emplace_front(x)
#define eb(x) emplace_back(x)
#define pf() pop_front()
#define pb() pop_back()
#define mp(a,b) make_pair(a,b)
#define ceil(a,b) (a+b-1)/b
#define bit(n) (1LL<<n)
#define fi first
#define se second
#define fr front()
#define ba back()
#define be begin()
#define en end()
#define br break
#define cn continue
#define wh while
#define el else if
#define re return
const ll inf = 1LL << 60;
const ll mod = 1000000007;
const ll MOD = 998244353;
const ld pi = 3.1415926535;
const ld eps = 1e-10;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};
const ll DX[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll DY[8] = {0, 1, 1, 1, 0, -1, -1, -1};
void input() {}
void inputs() {}
void output() {}
template<class T, class...U> void input(T &x, U &...y) {
cin >> x;
input(y...);
}
template<class...T> void in(T &...x) {
input(x...);
}
template<class T> void inputs(const ll t, T &x) {
cin >> x[t];
}
template<class T, class...U> void inputs(const ll t, T &x, U &...y) {
cin >> x[t];
inputs(t, y...);
}
template<class T, class...U> void inputs(T &x, U &...y) {
rep(t, size(x))inputs(t, x, y...);
}
template<class...T> void ins(T &...x) {
inputs(x...);
}
template<class T, class...U> void output(T x, U...y) {
cout << x << "\n";
output(y...);
}
template<class...T> void out(T...x) {
output(x...);
}
template<class...T> void fin(T...x) {
out(x...);
exit(0);
}
template<class T> istream &operator>>(istream &i, V<T> &v) {
for(T &x : v) {
i >> x;
}
re i;
}
template<class T, class U> istream &operator>>(istream &i, P<T, U> &p) {
re i >> p.fi >> p.se;
}
template<class T> ostream &operator<<(ostream &o, V<T> &v) {
for(T &x : v) {
o << x << " ";
}
re o;
}
template<class T, class U> ostream &operator<<(ostream &o, P<T, U> &p) {
re o << p.fi << " " << p.se;
}
void yn(bool b) {
fin((b ? "Yes" : "No"));
}
void YN(bool b) {
fin((b ? "YES" : "NO"));
}
void pos(bool b) {
fin((b ? "POSSIBLE" : "IMPOSSIBLE"));
}
template<class T, class U> void chmax(T &a, U b) {
if(a < b) {
a = b;
}
}
template<class T, class U> void chmin(T &a, U b) {
if(a > b) {
a = b;
}
}
template<class T, class U> auto max(T a, U b) {
re a > b ? a : b;
}
template<class T, class U> auto min(T a, U b) {
re a < b ? a : b;
}
ll qp(ll x, ll n) {
ll r = 1;
wh(n > 0) {
if(n & 1) {
r *= x;
}
x *= x;
n >>= 1;
}
re r;
}
ll mdp(ll x, ll n) {
ll r = 1;
wh(n > 0) {
if(n & 1) {
r = r * x % mod;
}
x = x * x % mod;
n >>= 1;
}
re r;
}
ll MDp(ll x, ll n) {
ll r = 1;
wh(n > 0) {
if(n & 1) {
r = r * x % MOD;
}
x = x * x % MOD;
n >>= 1;
}
re r;
}
struct UnionFind {
vl par, sz;
UnionFind(ll n): par(n), sz(n, 1) {
rep(i, n) par[i] = i;
}
ll rot(ll x) {
if(par[x] == x) {
re x;
}
re par[x] = rot(par[x]);
}
void uni(ll x, ll y) {
x = rot(x), y = rot(y);
if(x == y) {
re;
}
if(sz[x] < sz[y]) {
swap(x, y);
}
sz[x] += sz[y];
par[y] = x;
}
bool eql(ll x, ll y) {
re rot(x) == rot(y);
}
ll siz(ll x) {
re sz[rot(x)];
}
};
struct IOSetup {
IOSetup() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
cout << fixed << setprecision(10);
}
} iosetup;
#pragma endregion
signed main() {
ll n;
in(n);
ll x = n * 1.08;
if(x == 206) {
out("so-so");
}
el(x < 206) out("Yay!");
else {
out(":(");
}
}
