#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for(long long i = 0; i < (n); i++)
#define REP(i,s,n) for(long long i = (s); i <= (n); i++)
#define repr(i,n) for(long long i = (n - 1); i >= 0; i--)
#define REPR(i,s,n) for(long long i = (s); i >= (n); i--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sumvec(v) accumulate(all(v), 0LL)
#define DOUBLE fixed << setprecision(15)
#define OK cerr << "OK\n"
#define OK1 cerr << "OK1\n"
#define OK2 cerr << "OK2\n"
#define sz(s) (long long)s.size()
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vd> vvd;
typedef vector<vc> vvc;
typedef vector<vb> vvb;
typedef pair<ll, ll> P;
typedef vector<P> vP;
void debug() { cerr << "\n"; }
template<class T, class... Args> void debug(const T &x, const Args &... args) { cerr << x << " "; debug(args...); }
template<class T> auto min(const T& a) { return *min_element(a.begin(), a.end()); }
template<class T> auto max(const T& a) { return *max_element(a.begin(), a.end()); }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define INT(...) int __VA_ARGS__; IN(__VA_ARGS__)
#define LL(...) long long __VA_ARGS__; IN(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__; IN(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__; IN(__VA_ARGS__)
#define STR(...) string __VA_ARGS__; IN(__VA_ARGS__)
#define LD(...) long double __VA_ARGS__; IN(__VA_ARGS__)
void scan(int& a) { cin >> a; }
void scan(long long& a) { cin >> a; }
void scan(char& a) { cin >> a; }
void scan(double& a) { cin >> a; }
void scan(string& a) { cin >> a; }
void scan(long double& a) { cin >> a; }
void IN() {}
template<class Head, class... Tail> void IN(Head& head, Tail&... tail) { scan(head); IN(tail...); }
void YES(bool b) { cout << ((b) ? "YES\n" : "NO\n"); }
void Yes(bool b) { cout << ((b) ? "Yes\n" : "No\n"); }
void yes(bool b) { cout << ((b) ? "yes\n" : "no\n"); }
void Yay(bool b) { cout << ((b) ? "Yay!\n" : ":(\n"); }
void possible(bool b) { cout << ((b) ? "possible\n" : "impossible\n"); }
void Possible(bool b) { cout << ((b) ? "Possible\n" : "Impossible\n"); }
void POSSIBLE(bool b) { cout << ((b) ? "POSSIBLE\n" : "IMPOSSIBLE\n"); }
const int inf = 1001001001;
const long long INF = ((1LL << 62) - (1LL << 31));
const long double pi = acos(-1.0);
int main() {
LL(x, y);
REP(i,1,x) {
if (i * 2 + (x - i) * 4 == y) {
Yes(true);
return 0;
}
}
Yes(false);
return 0;
}
