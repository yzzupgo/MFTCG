#include <bits/stdc++.h>
namespace clibrary {
using namespace std;
namespace macro {
using ll = long long;
using ld = long double;
#define rep(i,n) for(ll i=0;i<n;i++)
#define irep(i,n) for(ll i=0;i<=n;i++)
#define reps(i,j,n) for(ll i=j;i<n;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define bit(i,n) for(ll i=0;i<(1<<n);i++)
#define dbl(i) fixed << setprecision(15) << i << endl
#define all(a) a.begin(),a.end()
#define gcd __gcd
#define Unweightgraph vector<vector<ll>>
#define Weightgraph vector<vector<Edge>>
#define st(a) sort(a.begin(),a.end())
#define rst(a) sort(a.rbegin(),a.rend())
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define fi first
#define se second
using vl = vector<ll>;
using vi = vector<int>;
using vs = vector<string>;
using vpl = vector<pair<ll, ll>>;
using P = pair<ll, ll>;
const ll mod = 1000000007;
const ll mod1 = 998244353;
const ll inf = 1e9;
const ll linf = 1e18;
string yn(bool a) {
if(a) {
return "Yes";
}
return "No";
}
string Yn(bool a) {
if(a) {
return "YES";
}
return "NO";
}
template <typename T>
bool chmin(T &a, const T &b) {
if(a > b) {
a = b;
return true;
}
return false;
}
template <typename T>
bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return true;
}
return false;
}
class mint {
ll x;
public:
mint(ll x = 0) : x((x % mod + mod) % mod) {}
mint operator-() const {
return mint(-x);
}
mint &operator+=(const mint &a) {
if((x += a.x) >= mod) {
x -= mod;
}
return *this;
}
mint &operator-=(const mint &a) {
if((x += mod - a.x) >= mod) {
x -= mod;
}
return *this;
}
mint &operator*=(const mint &a) {
(x *= a.x) %= mod;
return *this;
}
mint operator+(const mint &a) const {
mint res(*this);
return res += a;
}
mint operator-(const mint &a) const {
mint res(*this);
return res -= a;
}
mint operator*(const mint &a) const {
mint res(*this);
return res *= a;
}
mint pow(ll t) const {
if(!t) {
return 1;
}
mint a = pow(t >> 1);
a *= a;
if(t & 1) {
a *= *this;
}
return a;
}
mint inv() const {
return pow(mod - 2);
}
mint &operator/=(const mint &a) {
return (*this) *= a.inv();
}
mint operator/(const mint &a) const {
mint res(*this);
return res /= a;
}
friend ostream &operator<<(ostream &os, const mint &m) {
os << m.x;
return os;
}
};
class UnionFind {
public:
vector <ll> par;
vector <ll> siz;
UnionFind(ll sz_): par(sz_), siz(sz_, 1LL) {
for(ll i = 0; i < sz_; ++i) {
par[i] = i;
}
}
void init(ll sz_) {
par.resize(sz_);
siz.assign(sz_, 1LL);
for(ll i = 0; i < sz_; ++i) {
par[i] = i;
}
}
ll root(ll x) {
while(par[x] != x) {
x = par[x] = par[par[x]];
}
return x;
}
bool unite(ll x, ll y) {
x = root(x);
y = root(y);
if(x == y) {
return false;
}
if(siz[x] < siz[y]) {
swap(x, y);
}
siz[x] += siz[y];
par[y] = x;
return true;
}
bool same(ll x, ll y) {
return root(x) == root(y);
}
ll size(ll x) {
return siz[root(x)];
}
};
struct Edge {
ll to;
ll weight;
Edge(ll t, ll w) : to(t), weight(w) { }
};
template<typename T>
class BIT {
public:
int N;
vector<T> data;
BIT(T _N): N(_N) {
data.assign(N + 1, 0);
};
void add1(int a, T w) {
for(int x = a; x <= N; x += x & -x) {
data[x] += w;
}
}
T sum1(int a) {
T res = 0;
for(int x = a; x > 0; x -= x & -x) {
res += data[x];
}
return res;
}
T sum1(int l, int r) {
return sum1(r) - sum1(l - 1);
}
void add(int a, T w) {
add1(a + 1, w);
}
T sum(int a) {
return sum1(a + 1);
}
T sum(int l, int r) {
return sum(r) - sum(l - 1);
}
void debug() {
print(data);
}
};
template <typename T>
struct BIT2 {
int n;
vector<T> bit[2];
BIT2(int n_) {
init(n_);
}
void init(int n_) {
n = n_ + 1;
for(int p = 0; p < 2; p++) {
bit[p].assign(n, 0);
}
}
void add_sub(int p, int i, T x) {
for(int idx = i; idx < n; idx += (idx & -idx)) {
bit[p][idx] += x;
}
}
void add(int l, int r, T x) {
add_sub(0, l, -x * (l - 1));
add_sub(0, r, x * (r - 1));
add_sub(1, l, x);
add_sub(1, r, -x);
}
T sum_sub(int p, int i) {
T s(0);
for(int idx = i; idx > 0; idx -= (idx & -idx)) {
s += bit[p][idx];
}
return s;
}
T sum(int i) {
return sum_sub(0, i) + sum_sub(1, i) * i;
}
};
struct Edge3 {
ll cost, from, to;
Edge3() {}
Edge3(ll c, ll f, ll t) : from(c), to(f), cost(t) {}
friend bool operator < (const Edge3 &lhs, const Edge3 &rhs) {
return lhs.cost < rhs.cost;
};
friend bool operator > (const Edge3 &lhs, const Edge3 &rhs) {
return rhs < lhs;
};
friend bool operator <= (const Edge3 &lhs, const Edge3 &rhs) {
return !(lhs > rhs);
};
friend bool operator >= (const Edge3 &lhs, const Edge3 &rhs) {
return !(lhs < rhs);
};
};
struct kruskal {
struct UnionFind uf;
uint64_t weight;
kruskal(ll V, vector<Edge3> &edges) : uf(V), weight(0) {
sort(edges.begin(), edges.end());
for(auto e : edges) {
if(uf.same(e.from, e.to)) {
continue;
}
uf.unite(e.from, e.to);
weight += e.cost;
}
}
};
}
using namespace macro;
vector<ll> enum_divisors(ll N) {
vector<ll> res;
for(ll i = 1; i * i <= N; ++i) {
if(N % i == 0) {
res.push_back(i);
if(N / i != i) {
res.push_back(N / i);
}
}
}
sort(res.begin(), res.end());
return res;
}
bool prime(ll a) {
if(a <= 1) {
return false;
}
for(int i = 2; i * i <= a; i++) {
if(a % i == 0) {
return false;
}
}
return true;
}
ll lcm(ll a, ll b) {
ll d = gcd(a, b);
return a / d * b;
}
template <typename T>
T rui(T a, T n) {
T x = 1;
while(n > 0) {
if(n & 1) {
x = x * a;
}
a = a * a;
n >>= 1;
}
return x;
}
long long mpow(long long x, long long n, ll m) {
ll ret = 1;
while(n > 0) {
if(n & 1) {
ret = ret * x % m;
}
x = x * x % m;
n >>= 1;
}
return ret;
}
vector<vector<ll>> comblist(int n, int r) {
vector<vector<ll>> v(n + 1, vector<ll>(n + 1, 0));
for(int i = 0; i < v.size(); i++) {
v[i][0] = 1;
v[i][i] = 1;
}
for(int j = 1; j < v.size(); j++) {
for(int k = 1; k < j; k++) {
v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
}
}
return v;
}
ll mcomb(ll n, ll x, ll mod) {
ll res;
ll a = 1;
for(ll i = 0; i < x; i++) {
a = a * n % mod;
n--;
}
ll b = 1;
for(ll i = 1; i < x + 1; i++) {
b = b * i % mod;
}
res = (a * mpow(b, mod - 2, mod)) % mod;
return res;
}
ll phi(ll n) {
ll ret = n;
for(ll i = 2; i * i <= n; i++) {
if(n % i == 0) {
ret -= ret / i;
while(n % i == 0) {
n /= i;
}
}
}
if(n > 1) {
ret -= ret / n;
}
return ret;
}
ll extGCD(ll a, ll b, ll &x, ll &y) {
if(b == 0) {
x = 1;
y = 0;
return a;
}
ll d = extGCD(b, a % b, y, x);
y -= a / b * x;
return d;
}
ll modinv(ll a, ll m) {
ll x, y;
extGCD(a, m, x, y);
return (x % m + m) % m;
}
ll bcount(ll bits) {
bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
return (bits & 0x0000ffff) + (bits >> 16 & 0x0000ffff);
}
vector<pair<long long, long long> > prime_factorize(long long N) {
vector<pair<long long, long long> > res;
for(long long a = 2; a * a <= N; ++a) {
if(N % a != 0) {
continue;
}
long long ex = 0;
while(N % a == 0) {
++ex;
N /= a;
}
res.push_back({a, ex});
}
if(N != 1) res.push_back({N, 1});
return res;
}
void warshall_floyd(int n, vector<vector<ll>> &d) {
for(int k = 0; k < n; k++) {
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}
}
}
}
vector<ll> eratosthenes(const ll N) {
vector<bool> is_prime(N + 1);
for(ll i = 0; i <= N; i++) {
is_prime[ i ] = true;
}
vector<ll> P;
for(ll i = 2; i <= N; i++) {
if(is_prime[ i ]) {
for(ll j = 2 * i; j <= N; j += i) {
is_prime[ j ] = false;
}
P.emplace_back(i);
}
}
return P;
}
vector<bool> eratosthenescheck(const ll N) {
vector<bool> is_prime(N + 1);
for(ll i = 0; i <= N; i++) {
is_prime[ i ] = true;
}
for(ll i = 2; i <= N; i++) {
if(is_prime[ i ]) {
for(ll j = 2 * i; j <= N; j += i) {
is_prime[ j ] = false;
}
}
}
return is_prime;
}
vector<ll> dijkstra(ll s, ll n, vector<vector<Edge>> g) {
priority_queue<P, vector<P>, greater<P>> q;
vector<ll> dist(n, linf);
q.push(make_pair(0, s));
dist[s] = 0;
while(!q.empty()) {
ll pos = q.top().second;
ll cost = q.top().first;
q.pop();
if(cost > dist[pos]) {
continue;
}
for(ll i = 0; i < g[pos].size(); i++) {
ll to = g[pos][i].to, cost = g[pos][i].weight;
if(dist[to] > dist[pos] + cost) {
dist[to] = dist[pos] + cost;
q.push(make_pair(dist[to], to));
}
}
}
return dist;
}
ll sieve(ll a, ll b) {
ll x = sqrt(b);
ll l = b - a + 1;
vector<bool> pri(x, true);
vector<bool> ans(l, true);
for(ll i = 2; i * i < b; i++) {
if(pri[i]) {
for(ll j = 2 * i; j * j < b; j += i) {
pri[j] = false;
}
for(ll j = max(2LL, (a + i - 1) / i) * i; j < b; j += i) {
ans[j - a] = false;
}
}
}
ll tmp = 0;
rep(i, b - a)if(ans[i]) {
tmp++;
}
return tmp;
}
class scc {
ll n;
Unweightgraph g, rg;
vl check;
vl orderlist;
vl grouplist;
ll cnt = 0;
vector<vector<ll>> groupvec;
public:
scc(ll _n): n(_n) {
g.resize(n);
rg.resize(n);
check.resize(n, 0);
orderlist.resize(n, -1);
grouplist.resize(n, -1);
groupvec.resize(n);
};
void build(Unweightgraph _ng) {
rep(i, n) {
for(auto x : _ng[i]) {
g[i].push_back(x);
rg[x].push_back(i);
}
}
};
void dfs(ll now, ll prev) {
check[now] = 1;
for(auto x : g[now]) {
if(check[x] != -0 || x == prev) {
continue;
}
dfs(x, now);
}
orderlist[cnt] = now;
cnt++;
};
void dfs2(ll now, ll group) {
grouplist[now] = group;
groupvec[group].push_back(now);
for(auto x : rg[now]) {
if(grouplist[x] != -1) {
continue;
}
dfs2(x, group);
}
}
vector<vector<ll>> get() {
rep(i, n) {
if(check[i]) {
continue;
}
dfs(i, -1);
}
for(ll i = n - 1; i >= 0; i--) {
if(orderlist[i] == -1) {
continue;
}
if(grouplist[orderlist[i]] != -1) {
continue;
}
dfs2(orderlist[i], orderlist[i]);
}
return groupvec;
}
};
class flow {
public:
ll n;
vector<bool> f;
struct edg {
ll to, cap, rev;
};
vector<vector<edg>> gn;
flow(ll _n): n(_n) {
gn.resize(_n);
f.assign(_n, false);
}
void add_edge(ll from, ll to, ll cap) {
gn[from].push_back(edg{to, cap, (ll)gn[to].size()});
gn[to].push_back(edg{from, 0, (ll)gn[from].size() - 1});
}
ll flow_dfs(ll v, ll t, ll mincap) {
if(v == t) {
return mincap;
}
f[v] = true;
for(auto &x : gn[v]) {
if(!f[x.to] && x.cap > 0) {
ll d = flow_dfs(x.to, t, min(mincap, x.cap));
if(d > 0) {
x.cap -= d;
gn[x.to][x.rev].cap += d;
return d;
}
}
}
return 0;
}
ll max_flow(ll s, ll t) {
ll flow = 0;
while(1) {
f.assign(f.size(), false);
ll fo = flow_dfs(s, t, linf);
if(fo == 0) {
return flow;
}
flow += fo;
}
}
};
class RangeMax {
public:
int size_ = 1;
vector<long long> dat;
void init(int sz) {
while(size_ <= sz) {
size_ *= 2;
}
dat.resize(size_ * 2, -linf);
}
void update(int pos, long long x) {
pos += size_;
dat[pos] = x;
while(pos >= 2) {
pos >>= 1;
dat[pos] = max(dat[pos * 2], dat[pos * 2 + 1]);
}
}
long long query_(int l, int r, int a, int b, int u) {
if(l <= a && b <= r) {
return dat[u];
}
if(r <= a || b <= l) {
return -linf;
}
long long v1 = query_(l, r, a, (a + b) >> 1, u * 2);
long long v2 = query_(l, r, (a + b) >> 1, b, u * 2 + 1);
return max(v1, v2);
}
long long query(int l, int r) {
return query_(l, r, 0, size_, 1);
}
};
}
using namespace clibrary;
int main() {
ll n;
cin >> n;
ll x = 108 * n;
x /= 100;
if(x < 206) {
cout << "Yal!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
