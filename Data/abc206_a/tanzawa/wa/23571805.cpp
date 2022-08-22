#include<fstream>
#include<iostream>
#include<sstream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<map>
#include<stdlib.h>
#include<queue>
#include<tuple>
#include<iomanip>
#include<bitset>
#include<deque>
#include<stdio.h>
#include<set>
#include<array>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using graph = vector<vector<int>>;
const long long MOD = 1000000007;
const long long INF = 1e18;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using matrix = vector<vector<ll>>;
void chmin(int &x, int y) {
x = min(x, y);
}
int digit(ll x) {
int count = 1;
while(x / 10 > 0) {
count ++;
x /= 10;
}
return count;
}
bool prime(ll x) {
if(x == 1) {
return false;
}
for(ll i = 2; i * i <= x; i++) {
if(x % i == 0) {
return false;
}
}
return true;
}
void decom(ll x, map<ll, int> &hatano) {
for(ll i = 2; i * i <= x; i++) {
if(x % i == 0 && prime(i)) {
while(x % i == 0) {
x /= i;
hatano[i] ++;
}
}
}
if(x != 1) {
hatano[x] ++;
}
}
ll speedpow(ll x, ll y) {
ll res = 1;
ll test = x;
for(int i = 0; i < 31; i++) {
if(y & (1 << i)) {
res *= test;
}
res = res % MOD;
test = (test * test) % MOD;
}
return res;
}
ll combination(ll x, ll y) {
ll test = 1;
ll test1 = 1;
for(ll i = 0; i < y; i++) {
test = (test * (x - i)) % MOD;
test1 = (test1 * (i + 1LL)) % MOD;
}
return (test * speedpow(test1, MOD - 2)) % MOD ;
}
int euclid(int x, int y) {
if(y == 0) {
return x;
}
return euclid(y, x % y);
}
matrix mul(matrix &a, matrix &b) {
int p = a.size();
matrix res(p, vector<long long>(p, 0));
for(int i = 0; i < p; i++)
for(int j = 0; j < p; j++)
for(int k = 0; k < p; k++) {
(res[i][j] += a[i][k] * b[k][j]) %= MOD;
}
return res;
}
matrix pow(matrix m, long long k) {
int p = m.size();
matrix res(p, vector<long long>(p, 0));
for(int i = 0; i < p; i++) {
res[i][i] = 1;
}
while(k > 0) {
if(k & 1) {
res = mul(res, m);
}
m = mul(m, m);
k >>= 1;
}
return res;
}
struct dijkstra {
int n, m;
vector<vector<pair<ll, int>>> g;
vector<ll> ans;
dijkstra(int x, int y) {
n = x;
m = y;
g.assign(n, {});
ans.assign(n, INF);
rep(i, m) {
int a, b;
ll c, d;
cin >> a >> b >> c;
a --;
b --;
g[a].push_back(make_pair(c, b));
}
}
void solve(int x) {
ans[x] = 0;
priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> que;
que.push(make_pair(0, x));
while(!que.empty()) {
pair<ll, int> p = que.top();
que.pop();
int v = p.second;
ll d = p.first;
if(ans[v] != d) {
continue;
}
for(auto e : g[v]) {
if(ans[e.second] <= e.first + d) {
continue;
}
que.push(make_pair(e.first + d, e.second));
ans[e.second] = e.first + d;
}
}
}
~dijkstra() {
}
};
class C34 {
public:
std::string hatano;
C34() {
}
~C34() {
}
};
int main() {
int n;
cin >> n;
n *= 108;
int t = n / 100;
if(t < 206) {
cout << "Yey!" << endl;
} else if(t == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
