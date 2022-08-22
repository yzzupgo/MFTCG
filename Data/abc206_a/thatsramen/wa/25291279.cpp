#include <iostream>
#include <array>
#include <queue>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <vector>
#include <ctime>
#include <set>
#include <map>
#include <string>
#include <math.h>
#define pb push_back
#define ft first
#define sd second
#define dbg(...) dbg_out(__VA_ARGS__)
typedef long long ll;
typedef long double ld;
using namespace std;
const ll INF = 1e18 + 7;
const ll MOD = 1e9 + 7;
const ll N = 1e9 + 2;
const ll dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const ld PI = 3.14159265359;
template<typename A, typename B> ostream &operator<<(ostream &os, const pair<A, B> &p) {
return os << '(' << p.first << ", " << p.second << ')';
}
template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type > ostream & operator<<(ostream &os, const T_container &v) {
os << '[';
string sep;
for(const T &x : v) {
os << sep << x, sep = ", ";
}
return os << ']';
}
void dbg_out() {
cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
cerr << H << ' ';
dbg_out(T...);
}
template <typename T> void mins(T &x, T y) {
x = min(x, y);
}
template <typename T> void maxs(T &x, T y) {
x = max(x, y);
}
void setPrec() {
cout << fixed << setprecision(15);
}
void unsyncIO() {
cin.tie(0)->sync_with_stdio(0);
}
void setIn(string s) {
freopen(s.c_str(), "r", stdin);
}
void setOut(string s) {
freopen(s.c_str(), "w", stdout);
}
void setIO(string s = "") {
unsyncIO();
setPrec();
if(s.size()) {
setIn(s + ".in"), setOut(s + ".out");
}
}
void solve() {
ld n;
cin >> n;
n *= 1.08;
if(n == 206) {
cout << "so-so";
} else if(n < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
cout << '\n';
}
int main() {
int tt = 1;
#ifdef TEST_CASES
cin >> tt;
#endif
while(tt--) {
solve();
}
return 0;
}
