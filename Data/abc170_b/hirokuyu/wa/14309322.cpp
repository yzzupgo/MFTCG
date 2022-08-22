#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <iomanip>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
typedef vector<vector<int> > Graph;
typedef pair<int, int> P;
typedef long long ll;
long long INF = 1<<30;
long long GCD(long long a, long long b) {
if (b == 0) return a;
else return GCD(b, a % b);
}
const int mod = 998244353;
struct mint {
ll x;
mint(ll x=0):x((x%mod+mod)%mod){}
mint operator-() const { return mint(-x);}
mint& operator+=(const mint a) {
if ((x += a.x) >= mod) x -= mod;
return *this;
}
mint& operator-=(const mint a) {
if ((x += mod-a.x) >= mod) x -= mod;
return *this;
}
mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
mint operator+(const mint a) const { return mint(*this) += a;}
mint operator-(const mint a) const { return mint(*this) -= a;}
mint operator*(const mint a) const { return mint(*this) *= a;}
mint pow(ll t) const {
if (!t) return 1;
mint a = pow(t>>1);
a *= a;
if (t&1) a *= *this;
return a;
}
mint inv() const { return pow(mod-2);}
mint& operator/=(const mint a) { return *this *= a.inv();}
mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}
mint f(int n) {
if (n == 0) return 1;
mint x = f(n/2);
x *= x;
if (n%2 == 1) x *= 2;
return x;
}
mint choose(int n, int a) {
mint x = 1, y = 1;
rep(i,a) {
x *= n-i;
y *= i+1;
}
return x / y;
}
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const double PI=3.14159265358979323846;
bool seen[100][100];
bool memo[110];
bool flag;
int dist[100][100];
bool compare_f(pair<int, int> &x, pair<int, int> &y) {
return x.second< y.second;
}
struct Unionfind{
vector<int> par;
Unionfind(int n) : par(n, -1){}
int root(int x){
if(par[x] < 0) return x;
else return par[x] = root(par[x]);
}
bool issame(int x, int y){
return root(x) == root(y);
}
bool merge(int x, int y){
x = root(x); y = root(y);
if(x == y) return false;
if(par[x]>par[y]) swap(x, y);
par[x] += par[y];
par[y] = x;
return true;
}
int size(int x){
return -par[root(x)];
}
};
P s(int x){
int a = x%10;
int b = 0;
while(x){
b = x;
b/=10;
}
return P(a, b);
}
int main() {
ll a, b; cin >> a >> b;
int sum=0;
for(int bit=0; bit<(1<<a); bit++){
for(int i=0; i<a; i++){
if(bit&(1<<i)){
sum+=2;
}else{
sum+=4;
}
}
if(sum == b){
cout << "Yes" << endl;
return 0;
}
sum = 0;
}
cout << "No" << endl;
}
