#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned;
using pcc = pair<char, char>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
using tuplis = array<ll, 3>;
template<class T> using pq = priority_queue<T, vector<T>, greater<T>>;
const ll LINF=0x1fffffffffffffff;
const ll MINF=0x7fffffffffff;
const ll LPLMT=10000000;
const ll NLGLMT=200000;
const ll N2LMT=3000;
const ll N3LMT=100;
const ll N4LMT=50;
const ll TNLMT=20;
const int INF=0x3fffffff;
const int MOD=1000000007;
const int MODD=998244353;
const ld DINF=numeric_limits<ld>::infinity();
const ld EPS=1e-9;
const ld PI=3.1415926535897932;
const ll dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const ll dy[] = {1, 0, -1, 0, 1, 1, -1, -1};
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=(n);i--;)
#define rrep2(i,n) for(ll i=(n);i--;)
#define rrep3(i,a,b) for(ll i=(b);i-->(a);)
#define rrep4(i,a,b,c) for(ll i=a+(b-a-1)/c*c;i>=a;i-=c)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define each1(i,a) for(auto&& i:a)
#define each2(x,y,a) for(auto&& [x,y]:a)
#define each3(x,y,z,a) for(auto&& [x,y,z]:a)
#define each(...) overload4(__VA_ARGS__,each3,each2,each1)(__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall1(i) (i).rbegin(),(i).rend()
#define rall2(i,k) (i).rbegin(),(i).rbegin()+k
#define rall3(i,a,b) (i).rbegin()+a,(i).rbegin()+b
#define rall(...) overload3(__VA_ARGS__,rall3,rall2,rall1)(__VA_ARGS__)
#define sum(...) accumulate(all(__VA_ARGS__),0LL)
#define dsum(...) accumulate(all(__VA_ARGS__),0.0L)
#define elif else if
#define unless(a) if(!(a))
#define mp make_pair
#define mt make_tuple
#define INT(...) int __VA_ARGS__;in(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;in(__VA_ARGS__)
#define ULL(...) ull __VA_ARGS__;in(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;in(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;in(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;in(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;in(__VA_ARGS__)
#define Sort(a) sort(all(a))
#define RSort(vec) sort(vec.begin(), vec.end(), greater<ll>())
#define Rev(a) reverse(all(a))
#define Uniq(a) sort(all(a));a.erase(unique(all(a)),end(a))
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
#define VEC(type,name,size) vector<type> name(size);in(name)
#define vv(type,name,h,...) vector<vector<type>>name(h,vector<type>(__VA_ARGS__))
#define VV(type,name,h,w) vector<vector<type>>name(h,vector<type>(w));in(name)
#define IV(type,name,size) vector<pair<int, int>> name;for (int i = 0; i < size; i++) {int a_i;cin >> a_i; name.emplace_back(a_i,i);}
#define vvv(type,name,h,w,...) vector<vector<vector<type>>>name(h,vector<vector<type>>(w,vector<type>(__VA_ARGS__)))
template<class T> auto min(const T& a){ return *min_element(all(a)); }
template<class T> auto max(const T& a){ return *max_element(all(a)); }
inline ll popcnt(ull a){ return __builtin_popcountll(a); }
ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }
ll intpow(ll a, ll b){ ll ans = 1; while(b){ if(b & 1) ans *= a; a *= a; b /= 2; } return ans; }
ll modpow(ll a, ll b, ll p){ ll ans = 1; while(b){ if(b & 1) (ans *= a) %= p; (a *= a) %= p; b /= 2; } return ans; }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > b){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < b){ a = b; return 1; } return 0; }
vector<ll> iota(ll n){ vector<ll> a(n); iota(a.begin(), a.end(), 0); return a; }
vector<pll> factor(ull x){ vector<pll> ans; for(ull i = 2; i * i <= x; i++) if(x % i == 0){ ans.push_back({i, 1}); while((x /= i) % i == 0) ans.back().second++; } if(x != 1) ans.push_back({x, 1}); return ans; }
map<ll,ll> factor_map(ull x){ map<ll,ll> ans; for(ull i = 2; i * i <= x; i++) if(x % i == 0){ ans[i] = 1; while((x /= i) % i == 0) ans[i]++; } if(x != 1) ans[x] = 1; return ans; }
vector<ll> divisor(ull x){ vector<ll> ans; for(ull i = 1; i * i <= x; i++) if(x % i == 0) ans.push_back(i); rrep(ans.size() - (ans.back() * ans.back() == x)) ans.push_back(x / ans[i]); return ans; }
template<class T> unordered_map<T, ll> press(vector<T>& a){ auto b = a; sort(all(b)); b.erase(unique(all(b)), b.end()); unordered_map<T, ll> ans; rep(b.size()) ans[b[i]] = i; each(i, a) i = ans[i]; return ans; }
template<class T> map<T, ll> press_map(vector<T>& a){ auto b = a; sort(all(b)); b.erase(unique(all(b)), b.end()); map<T, ll> ans; rep(b.size()) ans[b[i]] = i; each(i, a) i = ans[i]; return ans; }
int scan(){ return getchar(); }
void scan(int& a){ scanf("%d", &a); }
void scan(unsigned& a){ scanf("%u", &a); }
void scan(long& a){ scanf("%ld", &a); }
void scan(long long& a){ scanf("%lld", &a); }
void scan(unsigned long long& a){ scanf("%llu", &a); }
void scan(char& a){ do{ a = getchar(); }while(a == ' ' || a == '\n'); }
void scan(float& a){ scanf("%f", &a); }
void scan(double& a){ scanf("%lf", &a); }
void scan(long double& a){ scanf("%Lf", &a); }
void scan(vector<bool>& a){ for(unsigned i = 0; i < a.size(); i++){ int b; scan(b); a[i] = b; } }
void scan(char a[]){ scanf("%s", a); }
void scan(string& a){ cin >> a; }
template<class T> void scan(vector<T>&);
template<class T, size_t size> void scan(array<T, size>&);
template<class T, class L> void scan(pair<T, L>&);
template<class T, size_t size> void scan(T(&)[size]);
template<class T> void scan(vector<T>& a){ for(auto&& i : a) scan(i); }
template<class T> void scan(deque<T>& a){ for(auto&& i : a) scan(i); }
template<class T, size_t size> void scan(array<T, size>& a){ for(auto&& i : a) scan(i); }
template<class T, class L> void scan(pair<T, L>& p){ scan(p.first); scan(p.second); }
template<class T, size_t size> void scan(T (&a)[size]){ for(auto&& i : a) scan(i); }
template<class T> void scan(T& a){ cin >> a; }
void in(){}
template <class Head, class... Tail> void in(Head& head, Tail&... tail){ scan(head); in(tail...); }
void print(){ putchar(' '); }
void print(bool a){ printf("%d", a); }
void print(int a){ printf("%d", a); }
void print(unsigned a){ printf("%u", a); }
void print(long a){ printf("%ld", a); }
void print(long long a){ printf("%lld", a); }
void print(unsigned long long a){ printf("%llu", a); }
void print(char a){ printf("%c", a); }
void print(char a[]){ printf("%s", a); }
void print(const char a[]){ printf("%s", a); }
void print(float a){ printf("%.15f", a); }
void print(double a){ printf("%.15f", a); }
void print(long double a){ printf("%.15Lf", a); }
void print(const string& a){ for(auto&& i : a) print(i); }
template<class T> void print(const vector<T>&);
template<class T, size_t size> void print(const array<T, size>&);
template<class T, class L> void print(const pair<T, L>& p);
template<class T, size_t size> void print(const T (&)[size]);
template<class T> void print(const vector<T>& a){ if(a.empty()) return; print(a[0]); for(auto i = a.begin(); ++i != a.end(); ){ putchar(' '); print(*i); } }
template<class T> void print(const deque<T>& a){ if(a.empty()) return; print(a[0]); for(auto i = a.begin(); ++i != a.end(); ){ putchar(' '); print(*i); } }
template<class T, size_t size> void print(const array<T, size>& a){ print(a[0]); for(auto i = a.begin(); ++i != a.end(); ){ putchar(' '); print(*i); } }
template<class T, class L> void print(const pair<T, L>& p){ print(p.first); putchar(' '); print(p.second); }
template<class T, size_t size> void print(const T (&a)[size]){ print(a[0]); for(auto i = a; ++i != end(a); ){ putchar(' '); print(*i); } }
template<class T> void print(const T& a){ cout << a; }
int out(){ putchar('\n'); return 0; }
template<class T> int out(const T& t){ print(t); putchar('\n'); return 0; }
template<class Head, class... Tail> int out(const Head& head, const Tail&... tail){ print(head); putchar(' '); out(tail...); return 0; }
#ifdef DEBUG
inline ll __lg(ull __n){ return sizeof(ull) * __CHAR_BIT__ - 1 - __builtin_clzll(__n); }
#define debug(...) { print(#__VA_ARGS__); print(":"); out(__VA_ARGS__); }
#else
#define debug(...) void(0)
#endif
int first(bool i = true){ return out(i?"first":"second"); }
int yes(bool i = true){ return out(i?"yes":"no"); }
int Yes(bool i = true){ return out(i?"Yes":"No"); }
int No(){ return out("No"); }
int YES(bool i = true){ return out(i?"YES":"NO"); }
int NO(){ return out("NO"); }
int Yay(bool i = true){ return out(i?"Yay!":":("); }
int possible(bool i = true){ return out(i?"possible":"impossible"); }
int Possible(bool i = true){ return out(i?"Possible":"Impossible"); }
int POSSIBLE(bool i = true){ return out(i?"POSSIBLE":"IMPOSSIBLE"); }
void Case(ll i){ printf("Case #%lld: ", i); }
#define bSearch(v,k) binary_search(all(v),k)
#define lowB(v,k) lower_bound(all(v),k)
#define DLbetB(v,k) distance(lowB(v,k),v.begin())
#define DLbetE(v,k) distance(lowB(v,k),v.end())
#define uppB(v,k) upper_bound(all(v),k)
#define DUbetB(v,k) distance(uppB(v,k),v.begin())
#define DUbetE(v,k) distance(uppB(v,k),v.end())
#define Cnt(v,k) count(all(v),k)
#define CntIf(v,l) count_if(all(v),l)
#define Sort2D(myVec,i) sort(myVec.begin(),myVec.end(),[](const vector<ll> &alpha,const vector<ll> &beta){return alpha[i] < beta[i];});
template <class T>
T vgcd(T m, T n) {
return gcd(m, n);
}
template <class T, class... Args>
T vgcd(T a, Args... args) {
return vgcd(a, vgcd(args...));
}
void mod(ll &n,ll p){
n%=p;
if(n<0)n+=p;
}
ll rtmod(ll n,ll p){
mod(n,p);
return n;
}
ll modinv(ll a,ll m){
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
ll facctorialMethod(ll k){
ll sum = 1;
for (ll i = 1; i <= k; ++i)
{
sum *= i;
}
return sum;
}
ll fac2(ll k,ll a,ll p){
ll sum = 1;
for (ll i = k; i > k-a; --i)
{
sum *= i;
sum%=p;
}
return sum;
}
ll comb(const ll N,const ll K){
vector<vector<long long int> > v(N+1,vector<long long int>(N+1,0));
for(int i = 0;i <v.size(); i++){
v[i][0]=1;
v[i][i]=1;
}
for(int k = 1;k <v.size();k++){
for(int j = 1;j<k;j++){
v[k][j]=(v[k-1][j-1]+v[k-1][j]);
}
}
return v[N][K];
}
ll modcomb(ll n,ll k,ll p){
ll c=fac2(n,k,p);
c*=modinv(fac2(k,k,p),p);
mod(c,p);
return c;
}
ll doubling(const ll N,const ll Q,vector<ll> &a){
ll LOG_Q = floor(log2(Q))+1;
std::vector<std::vector<ll>> next(LOG_Q + 1, std::vector<ll>(N));
for (int i = 0; i < N; ++i){
next[0][i] = a[i];
}
for (ll k = 0; k < LOG_Q; ++k){
for (int i = 0; i < N; ++i){
if (next[k][i] == -1) {
next[k + 1][i] = -1;
}
else {
next[k + 1][i] = next[k][next[k][i]];
}
}
}
ll p=0;
for (ll k = LOG_Q - 1; k >= 0; --k){
if (p == -1) {
break;
}
if ((Q >> k) & 1) {
p = next[k][p];
}
}
return p;
}
bool IsPrime(ll num)
{
if (num < 2) return false;
else if (num == 2) return true;
else if (num % 2 == 0) return false;
double sqrtNum = sqrt(num);
for (int i = 3; i <= sqrtNum; i += 2)
{
if (num % i == 0)
{
return false;
}
}
return true;
}
signed main(){
LL(n,l);
ll eat;
abs(l)<abs(l+n-1)?eat=l:eat=l+n-1;
out(n*(l+l+n-1)/2-eat);
}
