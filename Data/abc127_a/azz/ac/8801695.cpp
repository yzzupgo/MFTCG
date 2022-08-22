#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define p(s) std::cout << s ;
#define pl(s) std::cout << s << endl;
#define all(v) v.begin(),v.end()
#define showVector(v) REP(i,v.size()){p(v[i]);p(" ")} pl("")
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long int ll;
typedef pair<ll,ll> P_ii;
typedef pair<double,double> P_dd;
template<class T>
vector<T> make_vec(size_t a){
return vector<T>(a);
}
template<class T, class... Ts>
auto make_vec(size_t a, Ts... ts){
return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
template<typename T,typename V>
typename enable_if<is_class<T>::value==0>::type
fill_v(T &t,const V &v){t=v;}
template<typename T,typename V>
typename enable_if<is_class<T>::value!=0>::type
fill_v(T &t,const V &v){
for(auto &e:t) fill_v(e,v);
}
ll gcd(ll a, ll b) {
if(a < b) swap(a,b);
if(b == 0) return a;
return gcd(b, a % b);
}
ll lcm(ll a, ll b){
ll g = gcd(a,b);
return (a/g)*b;
}
bool is_prime(int n){
for(int i = 2; i * i <= n; i++){
if(n % i == 0) return false;
}
return true;
}
vector<ll> divisor(ll n){
vector<ll> res;
for(ll i = 1; i * i <= n; i++){
if(n % i == 0){
res.push_back(i);
if(i != n / i) res.push_back(n / i);
}
}
return res;
}
vector<pair<ll, ll> > prime_factorize(ll n) {
vector<pair<ll, ll> > res;
for (ll p = 2; p * p <= n; ++p) {
if (n % p != 0) continue;
ll num = 0;
while (n % p == 0) { ++num; n /= p; }
res.push_back(make_pair(p, num));
}
if (n != 1) res.push_back(make_pair(n, 1));
return res;
}
const int mod = 1000000007;
struct mint {
ll x;
mint(ll x=0):x(x%mod){}
mint& operator+=(const mint a) {
if ((x += a.x) >= mod) x -= mod;
return *this;
}
mint& operator-=(const mint a) {
if ((x += mod-a.x) >= mod) x -= mod;
return *this;
}
mint& operator*=(const mint a) {
(x *= a.x) %= mod;
return *this;
}
mint operator+(const mint a) const {
mint res(*this);
return res+=a;
}
mint operator-(const mint a) const {
mint res(*this);
return res-=a;
}
mint operator*(const mint a) const {
mint res(*this);
return res*=a;
}
mint pow(ll t) const {
if (!t) return 1;
mint a = pow(t>>1);
a *= a;
if (t&1) a *= *this;
return a;
}
mint inv() const {
return pow(mod-2);
}
mint& operator/=(const mint a) {
return (*this) *= a.inv();
}
mint operator/(const mint a) const {
mint res(*this);
return res/=a;
}
};
const int MOD = 1000000007;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
void addM(ll &a, ll b) {
a += b;
if (a >= MOD) a -= MOD;
}
void mulM(ll &a, ll b) {
a = ((a%MOD)*(b%MOD))%MOD ;
}
ll powM(ll a,ll b) {
ll ret = 1;
ll tmp = a;
while(b>0) {
if((b&1)==1) ret = (ret * tmp) % MOD;
tmp = (tmp * tmp) % MOD;
b = b >> 1;
}
return ret;
}
int main(void) {
cin.tie(0);
ios::sync_with_stdio(false);
int A, B;
cin >> A >> B;
int ans = 0;
if(A >= 6 && A <= 12) ans = B / 2;
else if(A >= 13) ans = B;
cout << ans << endl;
return 0;
}
