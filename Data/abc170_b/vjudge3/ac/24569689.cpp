#pragma region Macros
#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template <class T> inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return 1;
}
return 0;
}
#ifdef DEBUG
template <class T, class U>
ostream &operator<<(ostream &os, const pair<T, U> &p) {
os << '(' << p.first << ',' << p.second << ')';
return os;
}
template <class T> ostream &operator<<(ostream &os, const vector<T> &v) {
os << '{';
for(int i = 0; i < (int)v.size(); i++) {
if(i) { os << ','; }
os << v[i];
}
os << '}';
return os;
}
void debugg() { cerr << endl; }
template <class T, class... Args>
void debugg(const T &x, const Args &... args) {
cerr << " " << x;
debugg(args...);
}
#define debug(...) \
cerr << __LINE__ << " [" << #__VA_ARGS__ << "]: ", debugg(__VA_ARGS__)
#define dump(x) cerr << __LINE__ << " " << #x << " = " << (x) << endl
#else
#define debug(...) (void(0))
#define dump(x) (void(0))
#endif
struct Setup {
Setup() {
cin.tie(0);
ios::sync_with_stdio(false);
cout << fixed << setprecision(15);
}
} __Setup;
using ll = long long;
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define FOR(i,a,b) for(int i = (a); i < int(b); i++)
#define REP(i,n) FOR(i, 0, n)
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
constexpr int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
void Case(int i) { cout << "Case #" << i << ": "; }
int popcount(int x) { return __builtin_popcount(x); }
ll popcount(ll x) { return __builtin_popcountll(x); }
#pragma endregion Macros
int main() {
int x, y;
cin >> x >> y;
REP(a, 1000) REP(b, 1000) {
if(a + b == x and 2*a + 4*b == y) {
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
}
