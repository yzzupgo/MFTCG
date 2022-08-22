#include <bits/stdc++.h>
using namespace std;
#define INCANT cin.tie(0), cout.tie(0), ios::sync_with_stdio(false), cout << fixed << setprecision(20);
#define int long long
#define gcd __gcd
#define pb push_back
#define all(x) (x).begin(), (x).end()
template<typename T>
bool chmax(T& a, T b){return (a = max(a, b)) == b;}
template<typename T>
bool chmin(T& a, T b){return (a = min(a, b)) == b;}
template<class T>
int lb(vector<T>& x,T n){return lower_bound(all(x) , n) - x.begin();}
template<class T>
int ub(vector<T>& x,T n){return upper_bound(all(x) , n) - x.begin();}
#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i, 0, n)
#define repi(i,a,b) for(int i = (int)(a); i < (int)(b); i++)
#define rep(...) _overload(__VA_ARGS__, repi, _rep)(__VA_ARGS__)
#define _rev(i,n) revi(i, n, 0)
#define revi(i,a,b) for(int i = (int)(a - 1); i >= (int)(b); i--)
#define rev(...) _overload(__VA_ARGS__, revi, _rev)(__VA_ARGS__)
#define each(i,n) for(auto&& i: n)
void in(){}
template<typename F, typename... R>
bool in(F& f, R&... r){
if(cin >> f){in(r...);return true;}
else return false;
}
#define out(x) cout << (x)
#define space() cout << " "
#define indent() cout << '\n'
void print(){}
template<typename F, typename... R>
void print(F f, R... r){out(f), indent(), print(r...);}
#define debughead(x) cerr << "Line " << __LINE__ << ": " << #x << ": "
#define debugout(x) cerr << (x) << " "
#define debugindent() cerr << '\n'
#define debug(x) debughead(x), debugout(x), debugindent()
#define YN(x) out((x) ? "YES" : "NO"), indent()
#define Yn(x) out((x) ? "Yes" : "No"), indent()
#define yn(x) out((x) ? "yes" : "no"), indent()
int INF = 1e18, MOD = 1e9 + 7;
double EPS = 1e-15, PI = acos(-1);
int dx[] = {0, 0, 1, 0, -1, -1, 1, 1, -1}, dy[] = {0, -1, 0, 1, 0, -1, -1, 1, 1};
int lcm(int a, int b){return a / gcd(a, b) * b;}
int factorial(int a){return a < 2 ? 1 : factorial(a - 1) * a;}
int summation(int a){return a < 1 ? 0 : (a * a + a) / 2;}
int combination(int n, int r){ int res = 1; rep(i, 1, r + 1){ res *= n--, res /= i; } return res; }
bool isPrime(int n){ rep(i, 2, sqrt(n) + 1){ if(i > 3){ i++; } if(!(n % i)){ return false; } } return true; }
vector<int> divisor(int n){ vector<int> ans; rep(i, 1, sqrt(n) + 1){ if(!(n % i)){ ans.pb(i); if(i * i < n){ ans.pb(n / i); } } } return ans; }
map<int, int> factorization(int n){ map<int, int> ans; rep(i, 2, sqrt(n) + 1){ if(i > 3){ i++; } while(!(n%i)){ ans[i]++, n /= i; } } if(n > 1){ ans[n]++; } return ans; }
int extgcd(int a, int b, int &x, int &y){ int g = a; x = 1, y = 0; if(b){ g = extgcd(b, a % b, y, x); y -= a / b * x; } return g; }
int invmod(int a, int m = MOD){ int x = 0, y = 0; extgcd(a, m, x, y); return (x + m) % m; }
struct mint{
int _num;
mint(int x = 0) : _num(){ _num = x % MOD; if(_num < 0){ _num += MOD; } }
inline mint operator = (int x){ _num = x % MOD; if(_num < 0){ _num += MOD; } return *this; }
inline mint operator = (mint x){ _num = x._num; return *this; }
inline mint operator + (int x){ return mint(_num + x); }
inline mint operator + (mint x){ int a = _num + x._num; if(a >= MOD){ a -= MOD; } return mint{a}; }
inline mint operator += (int x){ _num += x; _num %= MOD; if(_num < 0){ _num += MOD; } return *this; }
inline mint operator += (mint x){ _num += x._num; if(_num >= MOD){ _num -= MOD; } return *this; }
inline mint operator ++ (){ _num++; if(_num == MOD){ _num = 0; } return *this; }
inline mint operator - (int x){ return mint(_num - x); }
inline mint operator - (mint x){ int a = _num - x._num; if(a < 0){ a += MOD; } return mint{a}; }
inline mint operator -= (int x){ _num -= x; _num %= MOD; if(_num < 0){ _num += MOD; } return *this; }
inline mint operator -= (mint x){ _num -= x._num; if(_num < 0){ _num += MOD; } return *this; }
inline mint operator -- (){ _num--; if(_num == -1){ _num = MOD - 1; } return *this; }
inline mint operator * (int x){ return mint(_num * (x % MOD)); }
inline mint operator * (mint x){ return mint{_num * x._num % MOD}; }
inline mint operator *= (int x){ _num *= mint(x); _num %= MOD; return *this; }
inline mint operator *= (mint x){ _num *= x._num; _num %= MOD; return *this; }
inline mint operator / (int x){ return mint(_num * invmod(mint(x), MOD)); }
inline mint operator / (mint x){ return mint{_num * invmod(x._num, MOD) % MOD}; }
inline mint operator /= (int x){ _num *= invmod(mint(x), MOD); _num %= MOD; return *this; }
inline mint operator /= (mint x){ _num *= invmod(x._num, MOD); _num %= MOD; return *this; }
inline mint pow(int x){ mint ans = 1, cnt = *this; for(int i = 1; i < x + 1; i *= 2){ if(x & i){ ans *= cnt; x ^= i; } cnt *= cnt; } return ans; }
inline operator int() { return _num; }
};
vector<mint> fac(1, 1), inv(1, 1);
void reserve(int a){
if(fac.size() >= a) return;
if(a < fac.size() * 2) a = fac.size() * 2;
if(a >= MOD) a = MOD;
while(fac.size() < a) fac.push_back(fac.back() * (int)(fac.size()));
inv.resize(fac.size());
inv.back() = mint(1) / fac.back();
for(int i = inv.size() - 1; !inv[i - 1]; i--) inv[i - 1] = inv[i] * i;
}
mint fact(int n){ if(n < 0) return 0; reserve(n + 1); return fac[n]; }
mint perm(int n, int r){ if(r < 0 || n < r) return 0; reserve(n + 1); return fac[n] * inv[n - r]; }
mint comb(int n, int r){ if(r < 0 || n < r) return 0; reserve(n + 1); return fac[n] * inv[r] * inv[n - r]; }
mint mcomb(int n, int r){ return comb(n + r - 1, n - 1); }
struct UF{
vector<int> t;
UF(int size): t(size, -1){}
int root(int x){return t[x] < 0 ? x : t[x] = root(t[x]);}
int size(int x){return -t[root(x)];}
bool isSame(int x, int y){return root(x) == root(y);}
bool unite(int x, int y){
x = root(x), y = root(y);
if(x != y){
if(t[y] < t[x]){
swap(x, y);
}
t[x] += t[y], t[y] = x;
}
return x != y;
}
};
main(){
INCANT;
int n, res = 0;
in(n);
rep(i, 1, n + 1){
if(i <100000 && 1 > 9999 || i < 1000 && i > 99 || i < 10){
res++;
}
}
print(res);
}
