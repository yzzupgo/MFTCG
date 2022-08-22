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
#define sort(s) sort(s.begin(),s.end())
#define reverse(v) reverse(v.begin(), v.end());
#define Yes(ans) if(ans)cout<<"Yes"<<endl; else cout<<"No"<<endl;
#define YES(ans) if(ans)cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define hei(a) vector<a>
#define whei(a) vector<vector<a>>
#define UF UnionFind
#define rt0 return 0
#define INF 100000000
constexpr auto mod = 1000000007;
int ni(int n) {
if (n == 0)return 1;
int x = ni(n / 2);
x *= x;
if (n % 2 == 1)x *= 2;
return x;
}
llint f(int x, vector<llint>& s) {
if (x == 0)return 0;
if (x == 1)return 1;
if (s[x] != 0)return s[x];
return s[x] = f(x - 1, s) + f(x - 2, s);
}
llint gcd(llint a, llint b) {
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
int dfs(int m, int n,vector<int> a,vector<int> s) {
int MIN=100000000;
stack<string> st;
st.push("");
while (!st.empty()) {
string now = st.top();
st.pop();
if (now.size() == n){
int x[3]={0};
int y[3]={0};
for(int i=0;i<n;i++){
if(now[i]-'0'!=3){
x[now[i]-'0']+=s[i];
y[now[i]-'0']++;
}
}
int sum=0;
int ng=0;
for(int i=0;i<3;i++){
if(x[i]==0)ng=1;
sum+=abs(x[i]-a[i]);
if(y[i]>1)sum+=10*(y[i]-1);
}
if(ng==0)MIN=min(MIN,sum);
}
else {
for (int i = m - 1; i >= 0; i--) {
string next = now + to_string(i);
st.push(next);
}
}
}
return MIN;
}
void bfs(){
int sx,sy;
int gx,gy;
int h,w;
cin>>h>>w;
cin>>sx>>sy>>gx>>gy;
sx--;sy--;gx--;gy--;
whei(char) a(h,vector<char>(w));
whei(int) d(h,vector<int>(w,INF));
rep(i,0,h)rep(j,0,w){
cin>>a[i][j];
}
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
d[sx][sy]=0;
queue<pair<int,int>> que;
que.push(pair<int,int>(sx,sy));
while(que.size()){
pair<int,int>p=que.front();
que.pop();
if(p.first==gx&&p.second==gy)break;
for(int i=0;i<4;i++){
int nx=p.first+dx[i];
int ny=p.second+dy[i];
if(0<=nx&&0<=ny&&nx<h&&ny<w&&a[nx][ny]!='#'&&d[nx][ny]==INF){
que.push(pair<int,int>(nx,ny));
d[nx][ny]=d[p.first][p.second]+1;
}
}
}
cout<<d[gx][gy]<<endl;
}
void press(vector<int>& v) { v.erase(unique((v).begin(), (v).end()), v.end()); }
void press(vector<char>& v) { v.erase(unique((v).begin(), (v).end()), v.end()); }
llint min(llint a, llint b) {
if (a < b)return a;
return b;
}
llint max(llint a, llint b) {
if (a < b)swap(a, b);
return a;
}
llint p(int n) {
if (n == 1)return 1;
return n * p(n - 1);
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
int n,l;
cin>>n>>l;
hei(int) a(n);
int sum=0;
rep(i,0,n){
a[i]=i+l;
sum+=a[i];
}
int ans=10000000;
rep(i,0,n){
if(abs(a[i])<abs(ans))ans=a[i];
}
cout<<sum-ans<<endl;
return 0;
}
