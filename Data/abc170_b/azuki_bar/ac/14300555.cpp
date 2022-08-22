#define rep(i,n) for (int i = 0; i < (int)n; i++)
#define repi(i,a,b) for (int i = int(a); i < int(b); ++i)
#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;
typedef long long
ll;
ll gcd(ll a, ll b) {
return b ? gcd(b, a % b) : a;
}
vector<pair<ll, int>> factorize(ll n) {
vector<pair<ll, int>> res;
for (ll i = 2; i * i <= n; i++) {
if (n % i) continue;
res.emplace_back(i, 0);
while (n % i == 0) {
n /= i;
res.back().second++;
}
}
if (n != 1) res.emplace_back(n, 1);
return res;
}
ll lcm(ll a, ll b) {
return a / gcd(a, b) * b;
}
ll ceil(ll a, ll b) { return (a + b - 1) / b; }
const ll INF = LONG_MAX;
template <class T>
inline bool chmax(T &a, T b) {
if (a < b) {
a = b;
return 1;
}
return 0;
}
template <class T>
inline bool chmin(T &a, T b) {
if (a > b) {
a = b;
return 1;
}
return 0;
}
using Graph = vector<vector<int>>;
vector<bool> seen;
void dfs(const Graph &g, int v) {
seen[v] = true;
for (auto next_v : g[v]) {
if (seen[next_v]) continue;
dfs(g, next_v);
}
}
struct node {
int to, weight;
};
using Edge = vector<node>;
void addEdge(bool directed, Edge *edges, int u, int v, int wt) {
edges[u].push_back({v, wt});
if (!directed) {
edges[v].push_back({u, wt});
}
}
void zeroOneBFS(Edge *edges, vector<int> &dist, int src) {
for (int i = 0; i < dist.size(); i++) dist[i] = INT_MAX;
deque<int> Q;
dist[src] = 0;
Q.push_back(src);
while (!Q.empty()) {
int v = Q.front();
Q.pop_front();
for (int i = 0; i < edges[v].size(); i++) {
if (dist[edges[v][i].to] > dist[v] + edges[v][i].weight) {
dist[edges[v][i].to] = dist[v] + edges[v][i].weight;
if (edges[v][i].weight == 0)
Q.push_front(edges[v][i].to);
else
Q.push_back(edges[v][i].to);
}
}
}
for (int i = 0; i < dist.size(); i++) cout << dist[i] << " ";
}
int main() {
#ifdef LOCAL
std::ifstream in("code.txt");
std::cin.rdbuf(in.rdbuf());
#endif
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i++)
{
if (y == i * 2 + (x - i) * 4) {
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
