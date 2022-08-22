#include <bits/stdc++.h>
const int MAX = 510000;
const int MOD = 1e9+7;
long long fac[MAX], finv[MAX], inv[MAX];
#define _GLIBCXX_DEBUG
#define int long long
#define PI 3.14159265359
#define _Yes {cout<<"Yes"<<endl;}
#define _No {cout<<"No"<<endl;}
#define _YES {cout<<"YES"<<endl;}
#define _NO {cout<<"NO"<<endl;}
#define _ans {cout<<ans<<endl;}
#define _count {cout<<count<<endl;}
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<n+1;i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define rALL(obj) (obj).rbegin(), (obj).rend()
using namespace std;
using ll = long long;
using vc = vector<char>;
using vd = vector<double>;
using vi = vector<int>;
using vll = vector<ll>;
using vs = vector<string>;
using vvc = vector<vc>;
using vvd = vector<vd>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvs = vector<vs>;
using pii = pair<int, int>;
using psi = pair<string, int>;
using pis = pair<int, string>;
using pic = pair<int, char>;
using pss = pair<string, string>;
using pdd = pair<double, double>;
using vpii = vector<pii>;
using vpic = vector<pic>;
using vpsi = vector<psi>;
using vpis = vector<pis>;
using vpdd = vector<pdd>;
using vpss = vector<pss>;
using tiii = tuple<int, int, int>;
using tsii = tuple<string, int, int>;
using tiis = tuple<int, int, string>;
using vtiii = vector<tiii>;
using mii = map<int, int>;
int FACT(ll n){if(n==0){return 1;}else{ll base=1;for(ll i=1;i<=n;i++){base*=i;}return base;}}
int FACTmod(ll n, int mod){if(n==0){return 1;}else{ll base=1;for(ll i=1;i<=n;i++){base=base*i%mod;}return base;}}
vi DIVISOR(int n){
vi v;
for (int i=1;i*i<=n;i++){
if(n%i==0) {v.push_back(i);
if(i*i!=n)v.push_back(n/i);}
}
sort(ALL(v)); return v;}
bool is_prime(long long N) {
if (N == 1) return false;
for (long long i = 2; i * i <= N; ++i) {
if (N % i == 0) return false;
}
return true;
}
vi VEC_PRIME(int n) {
vi v;
bitset<1000000> is_prime(0);
for (int i = 2; i <= n; ++i) is_prime.set(i);
for (int i = 2; i <= n; ++i) {
if (is_prime[i]) {
for (int j = i * 2; j <= n; j += i) {
is_prime.reset(j);
}
}
}
for (int i = 2; i <= n; ++i) {
if (is_prime[i]) v.push_back(i);
}
return v;
}
void NCRinit(){fac[0]=fac[1]=1;finv[0]=finv[1]=1;inv[1]=1;for(int i=2; i<MAX; i++){fac[i]=fac[i-1]*i%MOD;inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;finv[i]=finv[i-1]*inv[i]%MOD;}}
long long NCR(int n,int k){if(n<k)return 0;if(n<0 || k<0){return 0;}return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;}
long long POW(ll x, ll n) {ll ret = 1;while (n>0){if(n&1)ret*=x;x*=x;n>>=1;}return ret;}
long long POWmod(int x,int n, int mod) {long long ret=1;while(n>0) {if(n&1)ret=ret*x%mod;x=x*x%mod;n>>=1;}return ret;}
ll GCD(ll x, ll y) {while(y>0){ll r=x%y;x=y;y=r;}return x;}
ll LCM(ll x, ll y){return (x/GCD(x,y))*y;}
int mNCR(int n,int r){
if(n<r){return 0;}
else if(r==0){return 1;}
else{int x=1,ans=1;
for(int i=n;i>n-r;i--){
ans=ans*i/x;
x++;
}
return ans;
}
}
vector<pair<long long, long long> > prime_factorize(long long N) {
vector<pair<long long, long long> > res;
for (long long a = 2; a * a <= N; ++a) {
if (N % a != 0) continue;
long long ex = 0;
while (N % a == 0) {
++ex;
N /= a;
}
res.push_back({a, ex});
}
if (N != 1) res.push_back({N, 1});
return res;
}
int MINVEC(vi v){
int min=2147483647;
int ans=0;
int n=v.size();
rep(i,n){
if(v[i]<=min){min=v[i];ans=i;}
}
return ans;
}
int MAXVEC(vi v){
int max=-2147483648;
int ans=0;
int n=v.size();
rep(i,n){
if(v[i]>=max){max=v[i];ans=i;}
}
return ans;
}
template <typename T>
bool chmax(T &a, const T& b) {
if (a < b) {
a = b;
return true;
}
return false;
}
template <typename T>
bool chmin(T &a, const T& b) {
if (a > b) {
a = b;
return true;
}
return false;
}
int MASSVEC(vi v, int x, int y){
int ans=0;
for(int i=x;i<=y;i++){
ans+=v[i];
}
return ans;
}
vector<pair<int, int>> SECONDSORT(vector<pair<int,int>> v){
int n=v.size();
rep(i,n){swap(v[i].first,v[i].second);}
sort(ALL(v));
rep(i,n){swap(v[i].first,v[i].second);}
return v;
}
vector<pair<int, int>> SECONDrSORT(vector<pair<int,int>> v){
int n=v.size();
rep(i,n){swap(v[i].first,v[i].second);}
sort(rALL(v));
rep(i,n){swap(v[i].first,v[i].second);}
return v;
}
signed main(void){
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++){
if(y==2*i+4*(x-i)){_Yes;return 0;}
}
_No;
}
