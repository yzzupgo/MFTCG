#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<map>
#include<string.h>
#include<complex>
#include<math.h>
#include<queue>
#include <functional>
#include<time.h>
#include <stack>
#include<iomanip>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<(n);i++)
#define ll long long
#define llint long long int
#define reverse(v) reverse(v.begin(), v.end());
#define Yes(ans) if(ans)cout<<"Yes"<<endl; else cout<<"No"<<endl;
#define YES(ans) if(ans)cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define hei(a) vector<a>
#define whei(a) vector<vector<a>>
#define UF UnionFind
#define Pint pair<int,int>
#define keta(a) fixed << setprecision(a)
constexpr auto INF = 1000000000000000000;
constexpr auto mod = 1000000007;
struct edge { int to, cost; };
ll gcd(ll a, ll b) {
if (a < b)swap(a, b);
if (b == 0)return a;
return gcd(b, a % b);
}
long long modpow(long long a, long long n, long long mod) {
long long res = 1;
while (n > 0) {
if (n & 1) res = res * a % mod;
a = a * a % mod;
n >>= 1;
}
return res;
}
long long modinv(long long a, long long m) {
long long b = m, u = 1, v = 0;
while (b) {
long long t = a / b;
a -= t * b; swap(a, b);
u -= t * v; swap(u, v);
}
u %= m;
if (u < 0) u += m;
return u;
}
ll int c(ll int a, ll int b, ll int m) {
ll int ans = 1;
for (ll int i = 0; i < b; i++) {
ans *= a - i;
ans %= m;
}
for (ll int i = 1; i <= b; i++) {
ans *= modinv(i, m);
ans %= m;
}
return ans;
}
struct UnionFind {
vector<int> par;
UnionFind(int N) : par(N) {
for (int i = 0; i < N; i++) par[i] = i;
}
int size(int a) {
return par[root(a)];
}
int root(int x) {
if (par[x] == x) return x;
return par[x] = root(par[x]);
}
void unite(int x, int y) {
int rx = root(x);
int ry = root(y);
if (rx == ry) return;
par[rx] = ry;
}
bool same(int x, int y) {
int rx = root(x);
int ry = root(y);
return rx == ry;
}
};
int main(){
int a, b;
cin >> a >> b;
int x = 4 * a;
Yes(b<=x&&(x-b)%2==0)
return 0;
}
