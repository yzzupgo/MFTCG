#include <iostream>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
#include<string>
#include<cassert>
#include<cmath>
#include<climits>
#include<iomanip>
using namespace std;
#define MOD 1000000007
#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define FOR(i,c) for(decltype((c).begin())i=(c).begin();i!=(c).end();++i)
#define ll long long
#define ull unsigned long long
#define all(hoge) (hoge).begin(),(hoge).end()
typedef pair<ll, ll> P;
const long long INF = 1LL << 60;
typedef vector<ll> Array;
typedef vector<Array> Matrix;
template<class T> inline bool chmin(T & a, T b) {
if (a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T & a, T b) {
if (a < b) {
a = b;
return true;
}
return false;
}
struct Edge {
ll to, cap, rev;
Edge(ll _to, ll _cap, ll _rev) {
to = _to; cap = _cap; rev = _rev;
}
};
typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
void add_edge(Graph& G, ll from, ll to, ll cap) {
G[from].push_back(Edge(to, cap, (ll)G[to].size()));
G[to].push_back(Edge(from, cap, (ll)G[from].size() - 1));
}
ll max_flow_dfs(Graph & G, ll v, ll t, ll f, vector<bool> & used)
{
if (v == t)
return f;
used[v] = true;
for (int i = 0; i < G[v].size(); ++i) {
Edge& e = G[v][i];
if (!used[e.to] && e.cap > 0) {
ll d = max_flow_dfs(G, e.to, t, min(f, e.cap), used);
if (d > 0) {
e.cap -= d;
G[e.to][e.rev].cap += d;
return d;
}
}
}
return 0;
}
ll max_flow(Graph & G, ll s, ll t)
{
ll flow = 0;
for (;;) {
vector<bool> used(G.size());
REP(i, used.size())used[i] = false;
ll f = max_flow_dfs(G, s, t, INF, used);
if (f == 0) {
return flow;
}
flow += f;
}
}
void Dijkstra(Graph& G, ll s, Array& d) {
d.resize(G.size());
REP(i, d.size())d[i] = INF;
d[s] = 0;
priority_queue<P, vector<P>, greater<P>> q;
q.push(make_pair(0, s));
while (!q.empty()) {
P a = q.top();
q.pop();
if (d[a.second] < a.first)continue;
REP(i, G[a.second].size()) {
Edge e = G[a.second][i];
if (d[e.to] > d[a.second] + e.cap) {
d[e.to] = d[a.second] + e.cap;
q.push(make_pair(d[e.to], e.to));
}
}
}
}
void WarshallFloyd(Graph& G, Matrix& d) {
d.resize(G.size());
REP(i, d.size())d[i].resize(G.size());
REP(i, d.size()) {
REP(j, d[i].size()) {
d[i][j] = INF;
}
}
REP(i, G.size()) {
REP(j, G[i].size()) {
d[i][G[i][j].to] = G[i][j].cap;
}
}
REP(i, G.size()) {
REP(j, G.size()) {
REP(k, G.size()) {
chmin(d[j][k], d[j][i] + d[i][k]);
}
}
}
}
class UnionFind {
vector<int> data;
int num;
public:
UnionFind(int size) : data(size, -1), num(size) { }
bool unionSet(int x, int y) {
x = root(x); y = root(y);
if (x != y) {
if (data[y] < data[x]) swap(x, y);
data[x] += data[y]; data[y] = x;
num--;
}
return x != y;
}
bool findSet(int x, int y) {
return root(x) == root(y);
}
int root(int x) {
return data[x] < 0 ? x : data[x] = root(data[x]);
}
int size(int x) {
return -data[root(x)];
}
int numSet() {
return num;
}
};
class Combination {
public:
Array fact;
Array inv;
ll mod;
ll mod_inv(ll x) {
ll n = mod - 2;
ll res = 1LL;
while (n > 0) {
if (n & 1) res = res * x % mod;
x = x * x % mod;
n >>= 1;
}
return res;
}
ll nCr(ll n, ll r) {
return ((fact[n] * inv[r] % mod) * inv[n - r]) % mod;
}
ll nPr(ll n, ll r) {
return (fact[n] * inv[n - r]) % mod;
}
Combination(ll n, ll _mod) {
mod = _mod;
fact.resize(n + 1);
fact[0] = 1;
REP(i, n) {
fact[i + 1] = (fact[i] * (i + 1LL)) % mod;
}
inv.resize(n + 1);
REP(i, n + 1) {
inv[i] = mod_inv(fact[i]);
}
}
};
void divisor(ll n, vector<ll>& ret) {
for (ll i = 1; i * i <= n; i++) {
if (n % i == 0) {
ret.push_back(i);
if (i * i != n) ret.push_back(n / i);
}
}
sort(ret.begin(), ret.end());
}
ll gcd(ll m, ll n) {
if (n == 0)return m;
return gcd(n, m % n);
}
ll lcm(ll m, ll n) {
return m / gcd(m, n) * n;
}
ll pow2(ll x, ll n) {
ll ans = 1ll;
while (n > 0) {
if ((n & 1) == 1) {
ans = ans * x%MOD;
}
x = x * x%MOD;
n >>= 1;
}
return ans;
}
class MedSet {
public:
multiset<ll> left, right;
ll med;
MedSet() {}
MedSet(ll _med) {
}
void insert(ll a) {
if (left.size() == 0) {
med = a;
left.insert(med);
}
else {
if (a < med) {
left.insert(a);
if (left.size() > right.size() + 1) {
right.insert(*(--left.end()));
left.erase(--left.end());
}
med = *(--left.end());
}
else {
right.insert(a);
if (right.size() > left.size()) {
left.insert(*(right.begin()));
right.erase(right.begin());
}
med = *(--left.end());
}
}
}
};
ll N, M, L, K, A, B, C, D, Q, X;
int main()
{
cin >> N >> L;
ll ans = 0;
ll min = 400;
REP(i, N) {
ans += L + i;
if (abs(L + i) < abs(min+L)) min=i;
}
cout << min << endl;
cout << ans -(L+min)<< endl;
return 0;
}
