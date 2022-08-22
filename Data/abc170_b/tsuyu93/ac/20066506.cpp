#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#ifdef __HOGE__
#pragma region macro
#endif
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned;
using pll = pair<ll, ll>;
using pli = pair<ll, int>;
using pii = pair<int, int>;
using pld = pair<ll, ld>;
using ppiii = pair<pii, int>;
using ppiill = pair<pii, ll>;
using ppllll = pair<pll, ll>;
using pplii = pair<pli, int>;
using mii = map<int, int>;
using dll = deque<ll>;
using qll = queue<ll>;
using pqll = priority_queue<ll>;
using pqrll = priority_queue<ll, vector<ll>, greater<ll>>;
using pqrpll = priority_queue<pll, vector<pll>, greater<pll>>;
using vint = vector<int>;
using vbool = vector<bool>;
using vstr = vector<string>;
using vll = vector<ll>;
using vpll = vector<pll>;
using vvll = vector<vector<ll>>;
using vvint = vector<vector<int>>;
using vvbool = vector<vbool>;
using vvstr = vector<vstr>;
using vvpll = vector<vector<pll>>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=b;i-->(a);)
#define rrep4(i,a,b,c) for(ll i=(a)+((b)-(a)-1)/(c)*(c);i>=(a);i-=c)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define each1(i,a) for(auto&&i:a)
#define each2(x,y,a) for(auto&&[x,y]:a)
#define each3(x,y,z,a) for(auto&&[x,y,z]:a)
#define each(...) overload4(__VA_ARGS__,each3,each2,each1)(__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall1(i) (i).rbegin(),(i).rend()
#define rall2(i,k) (i).rbegin(),(i).rbegin()+k
#define rall3(i,a,b) (i).rbegin()+a,(i).rbegin()+b
#define rall(...) overload3(__VA_ARGS__,rall3,rall2,rall1)(__VA_ARGS__)
#define SUM(...) accumulate(all(__VA_ARGS__),0LL)
#define ALL(x) x.begin(),x.end()
#define rALL(x) x.rbegin(),x.rend()
#define SIZE(x) ll(x.size())
#define Sort(a) sort(all(a))
#define INT(...) int __VA_ARGS__;in(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;in(__VA_ARGS__)
#define ULL(...) ull __VA_ARGS__;in(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;in(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;in(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;in(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;in(__VA_ARGS__)int scan(){ return getchar(); }
#define fs first
#define sc second
#define endl '\n'
#define elif else if
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
template<class T> void print(const complex<T>& a){ if(a.real() >= 0) print('+'); print(a.real()); if(a.imag() >= 0) print('+'); print(a.imag()); print('i'); }
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
inline ll __lg(ull x){ return 63 - __builtin_clzll(x); }
#define debug(...) { print(#__VA_ARGS__); print(":"); out(__VA_ARGS__); }
#else
#define debug(...) void(0)
#endif
#define INF32 2147483647
#define INF64 9223372036854775807
const ll MOD = 1000000007;
const int inf = 1e9;
const ll INF = 1e18;
const ll MAXR = 100000;
const ld PI=3.1415926535897932;
inline void Yes(bool b = true) { cout << (b ? "Yes" : "No") << '\n'; }
inline void YES(bool b = true) { cout << (b ? "YES" : "NO") << '\n'; }
inline void OKNG(bool b = true) { cout << (b ? "OK" : "NG") << '\n'; }
inline void possible(bool i = true){ cout << (i?"possible":"impossible") << '\n'; }
inline void Possible(bool i = true){ cout << (i?"Possible":"Impossible") << '\n'; }
inline void POSSIBLE(bool i = true){ cout << (i?"POSSIBLE":"IMPOSSIBLE") << '\n'; }
template<typename A, typename B> inline bool chmin(A& a, B b) {if (a > b) {a = b;return true;}return false;}
template<typename A, typename B> inline bool chmax(A& a, B b) {if (a < b) {a = b;return true;}return false;}
template<typename A, typename B> A min(A a, B b) {if (a < b) {return a;}return b;}
template<typename A, typename B> A max(A a, B b) {if (a > b) {return a;}return b;}
template<class T> auto min(const T& a){ return *min_element(a.begin(),a.end()); }
template<class T> auto max(const T& a){ return *max_element(a.begin(),a.end()); }
template<typename A> A power(A a, A b) {A res=1;while (b>0) {if (b&1){res*=a;}b/=2;a*=a;}return res;}
long long powmod(long long a, long long b) {long long res=1;while (b>0) {if (b&1){res*=a;res%=MOD;}b/=2;a*=a;a%=MOD;}return res;}
template<typename A> A powmod(A a, A b,A m) {A res=1;while (b>0) {if (b&1){res*=a;res%=m;}b/=2;a*=a;a%=m;}return res%m;}
template<typename A> A nlcm(vector<A> a) {A res;res = a[0];for (ll i = 1; i < (ll)a.size(); i++) {res = lcm(res, a[i]);}return res;}
template<typename A> A ngcd(vector<A> a){A res;res = a[0];for(ll i = 1; i < (ll)a.size() && res != 1; i++) {res = gcd(a[i], res);}return res;}
#ifdef __HOGE__
#pragma endregion
#endif
signed main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
ll X,Y;
cin >> X >> Y;
Yes((Y-2*X)>=0&&(Y-2*X)%2==0&&(X-(Y-2*X)/2)>=0);
return 0;
}
