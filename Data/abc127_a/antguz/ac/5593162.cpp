#include <bits/stdc++.h>
using namespace std;
typedef unsigned uint;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldbl;
typedef pair<int, int> pii;
typedef pair<uint, uint> puu;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pull;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<uint> vu;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<pii> vpii;
typedef vector<puu> vpuu;
typedef vector<pll> vpll;
typedef vector<pull> vpull;
typedef vector<string> vstr;
typedef vector<double> vdbl;
typedef vector<ldbl> vldbl;
#define pb push_back
#define ppb pop_back
#define pfr push_front
#define ppfr pop_front
#define emp emplace
#define empb emplace_back
#define be begin
#define rbe rbegin
#define all(x) (x).be(), (x).end()
#define rall(x) (x).rbe(), (x).rend()
#define fir first
#define sec second
#define mkp make_pair
#define brif(cond) if (cond) break
#define ctif(cond) if (cond) continue
#define retif(cond) if (cond) return
void canhazfast() {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);}
template<typename T> T gcd(T a, T b) {return b ? gcd(b, a%b) : a;}
template<typename T> T extgcd(T a, T b, T &x, T &y)
{
T x0 = 1, y0 = 0, x1 = 0, y1 = 1;
while (b) {
T q = a/b; a %= b; swap(a, b);
x0 -= q*x1; swap(x0, x1);
y0 -= q*y1; swap(y0, y1);
}
x = x0; y = y0; return a;
}
int ctz(uint x) {return __builtin_ctz(x);}
int ctzll(ull x) {return __builtin_ctzll(x);}
int clz(uint x) {return __builtin_clz(x);}
int clzll(ull x) {return __builtin_clzll(x);}
int popcnt(uint x) {return __builtin_popcount(x);}
int popcntll(ull x) {return __builtin_popcountll(x);}
int bsr(uint x) {return 31^clz(x);}
int bsrll(ull x) {return 63^clzll(x);}
int main()
{
canhazfast();
int a, b, ans;
cin >> a >> b;
if (a < 6) ans = 0;
else if (a < 13) ans = b/2;
else ans = b;
cout << ans << '\n';
return 0;
}
