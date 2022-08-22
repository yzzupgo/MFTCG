#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using PII = pair<int, int>;
const int MOD = 1000000007;
const int mod = 1000000007;
const int INF = 1000000000;
const long long LINF = 1e18;
const int MAX = 510000;
#define print(x) cout << x << endl
#define prints(x) cout << fixed << setprecision(10) << x << endl
#define printc(x) cout << setw(2) << setfill('0') << x << endl;
#define yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define no cout << "No" << endl
#define NO cout << "NO" << endl
#define all(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
unsigned gcd(unsigned a, unsigned b) {
if(a < b) return gcd(b, a);
unsigned r;
while ((r=a%b)) {
a = b;
b = r;
}
return b;
}
unsigned lcm(unsigned a, unsigned b){
return a / gcd(a, b) * b;
}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
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
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {
fac[0] = fac[1] = 1;
finv[0] = finv[1] = 1;
inv[1] = 1;
for (int i = 2; i < MAX; i++){
fac[i] = fac[i - 1] * i % MOD;
inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
finv[i] = finv[i - 1] * inv[i] % MOD;
}
}
long long COM(int n, int k){
if (n < k) return 0;
if (n < 0 || k < 0) return 0;
return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
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
#define rrep(i,a,b) for(int i=(a);i>(b);i--)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
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
int main(){
int n;
cin >> n;
int k;
cin >> k;
ll ans = 0;
int m = INF;
REP(i, n){
int x = k + i;
ans += x;
if(abs(m) > abs(x)) m = x;
}
cout << ans - m << endl;
return 0;
}
