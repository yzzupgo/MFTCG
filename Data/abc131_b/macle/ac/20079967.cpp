#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const double PI = acos(-1);
using PII = pair<int, int>;
const int MOD = 1000000007;
const int mod = 1000000007;
const int INF = 1000000000;
const double DINF = 1LL<<60;
const long long LINF = 1e18;
const int MAX = 510000;
#define print(x) cout << x << endl
#define prints(x) cout << fixed << setprecision(12) << x << endl
#define printc(x) cout << setw(2) << setfill('0') << x << endl;
#define yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define no cout << "No" << endl
#define NO cout << "NO" << endl
vector<long long>vecin(ll n){
vector<long long>res(n);
for(int i = 0; i < n; i++) cin >> res[i];
return res;
}
#define all(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
#define rrep(i,a,b) for(int i=(a);i>(b);i--)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
ll gcd(ll x, ll y) { return y ? gcd(y,x%y) : x;}
unsigned lcm(unsigned a, unsigned b){
return a / gcd(a, b) * b;
}
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
ll pow_mod(ll num, ll pow, ll mod) {
ll prod = 1;
num %= mod;
while (pow > 0) {
if (pow & 1) prod = prod * num % mod;
num = num * num % mod;
pow >>= 1;
}
return prod;
}
struct UnionFind {
vector<int> par;
vector<int> rank;
vector<ll> Size;
UnionFind(int n = 1) {
init(n);
}
void init(int n = 1) {
par.resize(n + 1); rank.resize(n + 1); Size.resize(n + 1);
for (int i = 0; i <= n; ++i) par[i] = i, rank[i] = 0, Size[i] = 1;
}
int root(int x) {
if (par[x] == x) {
return x;
}
else {
int r = root(par[x]);
return par[x] = r;
}
}
bool issame(int x, int y) {
return root(x) == root(y);
}
bool merge(int x, int y) {
x = root(x); y = root(y);
if (x == y) return false;
if (rank[x] < rank[y]) swap(x, y);
if (rank[x] == rank[y]) ++rank[x];
par[y] = x;
Size[x] += Size[y];
return true;
}
ll size(int x){
return Size[root(x)];
}
};
struct Mint {
int val;
Mint inv() const{
int tmp,a=val,b=mod,x=1,y=0;
while(b)tmp=a/b,a-=tmp*b,swap(a,b),x-=tmp*y,swap(x,y);
return Mint(x);
}
public:
Mint():val(0){}
Mint(ll x){if((val=x%mod)<0)val+=mod;}
Mint pow(ll t){Mint res=1,b=*this; while(t){if(t&1)res*=b;b*=b;t>>=1;}return res;}
Mint& operator+=(const Mint& x){if((val+=x.val)>=mod)val-=mod;return *this;}
Mint& operator-=(const Mint& x){if((val+=mod-x.val)>=mod)val-=mod; return *this;}
Mint& operator*=(const Mint& x){val=(ll)val*x.val%mod; return *this;}
Mint& operator/=(const Mint& x){return *this*=x.inv();}
bool operator==(const Mint& x) const{return val==x.val;}
bool operator!=(const Mint& x) const{return val!=x.val;}
bool operator<(const Mint& x) const{return val<x.val;}
bool operator<=(const Mint& x) const{return val<=x.val;}
bool operator>(const Mint& x) const{return val>x.val;}
bool operator>=(const Mint& x) const{return val>=x.val;}
Mint operator+(const Mint& x) const{return Mint(*this)+=x;}
Mint operator-(const Mint& x) const{return Mint(*this)-=x;}
Mint operator*(const Mint& x) const{return Mint(*this)*=x;}
Mint operator/(const Mint& x) const{return Mint(*this)/=x;}
};
struct factorial {
vector<Mint> Fact, Finv;
public:
factorial(int maxx){
Fact.resize(maxx+1),Finv.resize(maxx+1); Fact[0]=Mint(1); rep(i,0,maxx)Fact[i+1]=Fact[i]*(i+1);
Finv[maxx]=Mint(1)/Fact[maxx]; rrep(i,maxx,0)Finv[i-1]=Finv[i]*i;
}
Mint fact(int n,bool inv=0){if(inv)return Finv[n];else return Fact[n];}
Mint nPr(int n,int r){if(n<0||n<r||r<0)return Mint(0);else return Fact[n]*Finv[n-r];}
Mint nCr(int n,int r){if(n<0||n<r||r<0)return Mint(0);else return Fact[n]*Finv[r]*Finv[n-r];}
};
ll modfact(ll n) {
if (n <= 1) return 1;
return (n * modfact(n - 1)) % MOD;
}
template<class T>
vector<T> make_vec(size_t a){
return vector<T>(a);
}
template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
vector<pair<long long, int>>factorize(long long n){
vector<pair<long long, int>> res;
for(long long i = 2; i * i <= n; ++i){
if(n % i) continue;
res.emplace_back(i, 0);
while(n % i == 0){
n /= i;
res.back().second++;
}
}
if(n != 1) res.emplace_back(n, 1);
return res;
}
bool primejudge(long long a){
if(a <= 1) return false;
for(long long i = 2; i * i <= a; i++){
if(a % i == 0) return false;
}
return true;
}
int op(int a, int b){
return gcd(a, b);
}
int e(){
return 0;
}
vector<pair<int, int>>DG[2010];
vector<int>dijkstra(int s){
vector<int>dist(100020, INF);
dist[s] = 0;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>que;
que.push({0, s});
while(!que.empty()){
int cost, to;
cost = que.top().first; to = que.top().second;
que.pop();
if(dist[to] < cost) continue;
for(auto x : DG[to]){
int v = x.first, time = x.second;
if(dist[v] > dist[to] + time){
dist[v] = dist[to] + time;
que.push({dist[v], v});
}
}
}
return dist;
}
template<typename T>
struct BellmanFord{
struct Edge{
int from,to; ll cost;
Edge(){}
Edge(int from,int to,ll cost):from(from),to(to),cost(cost){}
};
int n;
vector<vector<int> >G;
vector<int> used,reach;
BellmanFord(int n):n(n),G(n),used(n,0),reach(n,0){}
vector<Edge> es;
void add_edge(int from,int to,ll cost){
es.push_back(Edge(from,to,cost));
G[from].push_back(to);
}
void dfs(int v){
if(used[v])return ;
used[v]=1;
for(int u:G[v]){
dfs(u);
}
}
ll build(int from,int to,int &neg_loop){
for(int i=0;i<n;i++){
fill(used.begin(),used.end(),0);
dfs(i);
reach[i]=used[to];
}
vector<ll> ds(n,1e18);
ds[from]=0;
for(int i=0;i<n;i++){
bool update=0;
for(auto e:es){
if(!reach[e.from]||!reach[e.to]||ds[e.from]==1e18) continue;
if(ds[e.to]>ds[e.from]+e.cost){
ds[e.to]=ds[e.from]+e.cost;
update=1;
}
}
if(!update)break;
if(i==n-1){
neg_loop=1;
return 1e18;
}
}
neg_loop=0;
return -ds[to];
}
};
template <class Abel> struct BIT {
Abel UNITY_SUM = 0;
vector<Abel> dat;
BIT(int n, Abel unity = 0) : UNITY_SUM(unity), dat(n, unity) { }
void init(int n) {
dat.assign(n, UNITY_SUM);
}
inline void add(int a, Abel x) {
for (int i = a; i < (int)dat.size(); i |= i + 1)
dat[i] = dat[i] + x;
}
inline Abel sum(int a) {
Abel res = UNITY_SUM;
for (int i = a - 1; i >= 0; i = (i & (i + 1)) - 1)
res = res + dat[i];
return res;
}
inline Abel sum(int a, int b) {
return sum(b) - sum(a);
}
void printdd() {
for (int i = 0; i < (int)dat.size(); ++i)
cout << sum(i, i + 1) << ",";
cout << endl;
}
};
template <class T>
struct Matrix {
vector<vector<T>> A;
Matrix() {}
Matrix(size_t m, size_t n) : A(m, vector<T>(n, 0)) {}
Matrix(size_t n) : A(n, vector<T>(n, 0)) {}
size_t height() const { return (A.size()); }
size_t width() const { return (A[0].size()); }
inline const vector<T> &operator[](int k) const { return (A.at(k)); }
inline vector<T> &operator[](int k) { return (A.at(k)); }
static Matrix E(size_t n) {
Matrix mat(n);
for (int i = 0; i < n; ++i) mat[i][i] = 1;
return (mat);
}
Matrix &operator+=(const Matrix &B) {
size_t m = height(), n = width();
assert(m == B.height() && n == B.width());
for (int i = 0; i < m; ++i)
for (int j = 0; j < n; ++j) (*this)[i][j] += B[i][j];
return (*this);
}
Matrix &operator-=(const Matrix &B) {
size_t m = height(), n = width();
assert(m == B.height() && n == B.width());
for (int i = 0; i < m; ++i)
for (int j = 0; j < n; ++j) (*this)[i][j] -= B[i][j];
return (*this);
}
Matrix &operator*=(const Matrix &B) {
size_t m = height(), n = B.width(), p = width();
assert(p == B.height());
vector<vector<T>> C(m, vector<T>(n, 0));
for (int i = 0; i < m; ++i)
for (int k = 0; k < p; ++k) {
T tmp = (*this)[i][k];
for (int j = 0; j < n; ++j) C[i][j] += tmp * B[k][j];
}
A.swap(C);
return (*this);
}
Matrix &operator^=(long long k) {
Matrix B = Matrix::E(height());
while (k) {
if (k & 1) B *= *this;
*this *= *this;
k >>= 1;
}
A.swap(B.A);
return (*this);
}
Matrix operator+(const Matrix &B) const { return (Matrix(*this) += B); }
Matrix operator-(const Matrix &B) const { return (Matrix(*this) -= B); }
Matrix operator*(const Matrix &B) const { return (Matrix(*this) *= B); }
Matrix operator^(const long long k) const { return (Matrix(*this) ^= k); }
Matrix trans() {
size_t m = height(), n = width();
Matrix res(n, m);
for (int i = 0; i < n; ++i)
for (int j = 0; j < m; ++j) res[i][j] = (*this)[j][i];
return res;
}
Matrix inv() {
assert(height() == width());
size_t n = height();
Matrix B(n, 2 * n);
for (int i = 0; i < n; ++i) {
B[i][i + n] = 1;
for (int j = 0; j < n; ++j) B[i][j] = (*this)[i][j];
}
for (int i = 0; i < n; ++i) {
int piv = i;
for (int j = i; j < n; ++j)
if (abs(B[j][i]) > abs(B[piv][i])) piv = j;
assert(abs(B[piv][i]) >= 0);
swap(B[i], B[piv]);
for (int j = i + 1; j < 2 * n; ++j) B[i][j] /= B[i][i];
for (int j = 0; j < n; ++j)
if (i != j)
for (int k = i + 1; k < 2 * n; ++k) B[j][k] -= B[j][i] * B[i][k];
}
Matrix res(n);
for (int i = 0; i < n; ++i)
for (int j = 0; j < n; ++j) res[i][j] = B[i][j + n];
return res;
}
friend ostream &operator<<(ostream &os, Matrix &p) {
size_t m = p.height(), n = p.width();
for (int i = 0; i < m; i++) {
os << "[";
for (int j = 0; j < n; j++) {
os << p[i][j] << (j + 1 == n ? "]\n" : ",");
}
}
return (os);
}
};
vector<vector<ll>> G;
vector<vector<pair<ll, ll>>>E;
ll n;
vector<ll> cnt, par;
vector<bool> ch;
int main(){
int n;
cin >> n;
int l;
cin >> l;
int r = (l + n - 1);
int ans = (l + r) * (r - l + 1) / 2;
if(l > 0) ans -= l;
else{
if(r < 0){
ans -= r;
}
}
print(ans);
return 0;
}
