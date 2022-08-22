#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ALL(a) (a).begin(), (a).end()
#define SZ(a) (int)(a).size()
#define FOR(a,b,c) for (int a = (b); a < (c); a++)
#define FORR(a,b,c) for (int a = (b); a >= (c); a--)
#define TRAV(a,b) for (auto& a : b)
#define ELO exit(0)
#define SORT(a) sort(ALL(a))
#define REV(a) reverse(ALL(a))
#define SORTR(a) SORT(a), REV(a)
#define PB push_back
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
template <class T> inline bool setmin(T& a, T b) {if (a > b) return a = b, 1; return 0; }
template <class T> inline bool setmax(T& a, T b) {if (a < b) return a = b, 1; return 0; }
namespace fastio {
template <class T> istream &operator>>(istream &os, vector<T> & vec){for (auto &u : vec)os >> u;return os;}
template <class T> ostream &operator<<(ostream &os, const vector<T> & vec){for (auto &u : vec)os << u << " ";return os;}
template<class T1, class T2> inline istream& operator>>(istream& os, pair<T1, T2>& p) { return os >> p.first >> p.second; }
template<class T1, class T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) { return os << p.first << " " << p.second; }
template <class T> ostream &operator<<(ostream &os, set<T> & con) { for (auto &u : con) os << u << " "; return os; }
void re() {}
template <typename T, typename... args> void re(T& x, args&... tail) { cin >> x; re(tail...); }
void pr() {}
template <typename T, typename... args> void pr(T x, args... tail) { cout << x << " "; pr(tail...);}
template <typename... args> void prln(args... tail) { pr(tail...); cout << "\n";}
}
using namespace fastio;
namespace debug {
template < typename _T > inline void _debug(const char *s, _T x) { cerr << s << " = " << x << "\n"; }
template < typename _T, typename... args > void _debug(const char *s, _T x, args... a) { while(*s != ',') cerr << *s++; cerr << " = " << x << ','; _debug(s + 1, a...); }
#if 1
#define debug(...) _debug(#__VA_ARGS__, __VA_ARGS__)
#define cerr cout
#else
#define debug(...) 1999
#define cerr if(0) cout
#endif
}
using namespace debug;
constexpr int MOD = 1e9 + 7;
constexpr int INF = INT_MAX;
constexpr ll LLINF = LLONG_MAX;
int main() {
BOOST;
int n, l; re(n, l);
pii res{INF, -1};
FOR(i, 1, n + 1) {
setmin(res, {l + i - 1, i});
}
int sum = 0;
FOR(i, 1, n + 1) if(i != res.second) {
sum += l + i - 1;
}
prln(sum);
ELO;
}
