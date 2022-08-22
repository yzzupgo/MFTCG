#include "bits/stdc++.h"
using namespace std;
#define ok1 cerr<<"ok1\n";
#define ok2 cerr<<"ok2\n";
#define M LLONG_MAX
#define rep(i,n) for(int i=0;i<n;++i)
#define REP(i,s,n) for(int i=(s);i<(n);++i)
#define repr(i,n) for(int i=n-1;i>=0;--i)
#define REPR(i,s,n) for(int i=(s);i>=(n);--(i))
#define all(a) (a).begin(),(a).end()
#define reall(a) (a).rbegin(),(a).rend()
#define pb emplace_back
#define DOUBLE fixed << setprecision(15)
#define fi first
#define se second
#define mp make_pair
#define mt make_tuple
#define out(x,y) ((x) < 0 || h <= (x) || (y) < 0 || w <= (y))
#define TO_STRING(VariableName) #VariableName
#define debug(x) cerr<<TO_STRING(x)<<" is: "<<x<<" "<<endl;
const double pi = acos(-1.0L);
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef deque<ll> dll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> TLL;
typedef vector<P> vP;
typedef vector<TLL> vTLL;
const ll mod = 1e9 + 7;
ll dx[4] = { -1,0,1,0 };
ll dy[4] = { 0,-1,0,1 };
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class A, class B>
ostream& operator<<(ostream& ost, const pair<A, B>&p) {
ost << "{ " << p.first << ", " << p.second << " }";
return ost;
}
template<class T>
ostream& operator<<(ostream& ost, const vector<T>&v) {
ost << "{ ";
for (int i = 0; i<v.size(); i++) {
if (i)ost << ", ";
ost << v[i];
}
ost << " }";
return ost;
}
template<class A, class B>
ostream& operator<<(ostream& ost, const map<A, B>&v) {
ost << "{ ";
for (auto p : v) {
ost << "{ " << p.first << ", " << p.second << " }";
}
ost << " }";
return ost;
}
void debugs() { std::cerr << "\n"; }
template <class T, class... Args>
void debugs(const T &x, const Args &... args) {
std::cerr << x << " ";
debugs(args...);
}
bool out_check(ll a, ll b) { return (0 <= a && a < b); }
double pitagoras(ll a, ll b, ll c, ll d) {
double dx = a - b, dy = c - d;
return pow(dx * dx + dy * dy, 0.5);
}
ll modpow(ll a, ll b) { ll c = 1; while (b > 0) { if (b & 1) { c = a * c%mod; }a = a * a%mod; b >>= 1; }return c; }
void Yes(bool x) { cout << ((x) ? "Yes\n" : "No\n"); }
void YES(bool x) { cout << ((x) ? "YES\n" : "NO\n"); }
void yes(bool x) { cout << ((x) ? "yes\n" : "no\n"); }
void Yay(bool x) { cout << ((x) ? "Yay!\n" : ":(\n"); }
void OK(bool x) { cout << ((x) ? "OK!\n" : "NG\n"); }
ll n, m, d, e, l, k, h, w, Q, ans, ret = M;
bool flag = false, flag2 = false, flag3 = false;
string s, t, u;
ll x, y;
int main() {
cin >> x >> y;
rep(i, 1000) {
if ((y - i * 2) % 4 == 0) {
if (i + ((y - i * 2) / 4) == x) {
Yes(1);
return 0;
}
}
}
Yes(0);
}
