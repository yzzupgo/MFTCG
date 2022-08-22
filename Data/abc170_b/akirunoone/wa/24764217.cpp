#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
template <class T>
istream& operator>>(istream& is, vector<T>& v) {
for (auto& a : v) cin >> a;
return is;
}
template <class T>
istream& operator>>(istream& is, vector<pair<T, T>>& v) {
for (auto& a : v) cin >> a.first >> a.second;
return is;
}
template <class T>
istream& operator>>(istream& is, vector<tuple<T, T, T>>& v) {
for (auto& a : v) {
T a1, a2, a3;
cin >> a1 >> a2 >> a3;
a = {a1, a2, a3};
}
return is;
}
template<typename T>
istream& operator>>(istream &is, complex<T>& c) {
T x, y;
is >> x >> y;
c.real(x);
c.imag(y);
return is;
}
template <class T>
ostream& operator<<(ostream& os, vector<T>& v) {
for (auto& a : v) os << a << " ";
os << endl;
return os;
}
template<class T>
bool chmin(T &a, T b) {
if (a > b) { a = b; return true; }
return false;
}
template<class T>
bool chmax(T &a, T b) {
if (a < b) { a = b; return true; }
return false;
}
#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)
#define TRC1(a) cout << #a ":" << a
#define TRC2(a,b) TRC1(a); cout << " "; TRC1(b)
#define TRC3(a,b,c) TRC2(a, b); cout << " "; TRC1(c)
#define TRC4(a,b,c,d) TRC3(a, b, c); cout << " "; TRC1(d)
#define GET_NAME(_1,_2,_3,_4,NAME,...) NAME
#define TRC(...) GET_NAME(__VA_ARGS__, TRC4, TRC3, TRC2, TRC1) (__VA_ARGS__) << endl
using veci = vector<int>;
using vecll = vector<ll>;
using Pi = pair<int, int>;
using Ti = tuple<int, int, int>;
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
const int IINF = INT32_MAX;
const ll LINF = INT64_MAX;
void solve();
int main() {
cin.tie(0); ios::sync_with_stdio(0);
cout << fixed << setprecision(15); solve(); return 0; }
void solve() {
int X, Y;
cin >> X >> Y;
rep(a, 1, X + 1) {
int b = X - a;
if (a * 2 + b * 4 == Y) {
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
}
