#include "bits/stdc++.h"
using namespace std;
using ll=long long;
#define print(n) cout<<n<<endl
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ALL(s) s.begin(),s.end()
#define P pair<ll,ll>
#define vl vector<ll>
#define vi vector<int>
#define vvl vector<vector<ll>>
#define vvi vector<vector<int>>
const int M=200111;
const int inf=1000000007;
const int mod=1000000007;
const double PI = 3.1415926535897932384626433;
const long long INF=1e18;
int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
int ddx[8]={1,-1,0,0,1,-1,-1,1},ddy[8]={0,0,1,-1,1,-1,1,-1};
struct UnionFind {
vector<int> par;
UnionFind(int n) : par(n, -1) { }
int root(int x) {
if (par[x] < 0) return x;
else return par[x] = root(par[x]);
}
bool same(int x, int y) {
return root(x) == root(y);
}
bool merge(int x, int y) {
x = root(x); y = root(y);
if (x == y) return false;
if (par[x] > par[y]) swap(x, y);
par[x] += par[y];
par[y] = x;
return true;
}
int size(int x) {
return -par[root(x)];
}
};
vvl comb(int n) {
vvl v(n + 1,vl(n + 1, 0));
for (int i = 0; i < v.size(); i++) {
v[i][0] = 1;
v[i][i] = 1;
}
for (int j = 1; j < v.size(); j++) {
for (int k = 1; k < j; k++) {
v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
}
}
return v;
}
void sosu(ll x,bool f[]){
ll y=x;
for(ll i=2;i<=sqrt(y);i++){
if(x%i==0){
x/=i;
f[i]=true;
i--;
}
}
}
ll gcd(ll x,ll y){
if(y)return gcd(y,x%y);
else return x;
}
int keta(ll a){
int ke=1;
while(a/=10)ke++;
return ke;
}
vector<long long> enum_divisors(long long N) {
vector<long long> res;
for (long long i = 1; i * i <= N; ++i) {
if (N % i == 0) {
res.push_back(i);
if (N/i != i) res.push_back(N/i);
}
}
sort(res.begin(), res.end());
return res;
}
ll zyou(ll x,ll n){
ll y=1;
rep(i,0,n){
y*=x;
}
return y;
}
int main() {
int x,y;
bool f=false;
cin>>x>>y;
rep(i,1,x+1)
if(2*i+4*(x-i)==y)f=true;
if(f)print("Yes");
else print("No");
}
