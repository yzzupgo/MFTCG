#include "bits/stdc++.h"
#define all(x) (x).begin(), (x).end()
#define rep(i,s,n) for (i64 i = (s), i ##_limit = (n); i < i ##_limit; ++i)
#define repr(i,s,t) for (i64 i = (s), i ##_limit = (t); i >= i ##_limit; --i)
#define VAR(type,...) type __VA_ARGS__; read(__VA_ARGS__);
#ifndef DBG
#define dump(...)
#endif
using namespace std;
using i64 = int_fast64_t;
using pii = pair<i64, i64>;
template <class T, class U> inline bool chmax(T &a, const U &b) { return b > a && (a = b, true); }
template <class T, class U> inline bool chmin(T &a, const U &b) { return b < a && (a = b, true); }
constexpr int INF = 0x3f3f3f3f;
constexpr i64 LINF = 0x3f3f3f3f3f3f3f3fLL;
template <class T>
inline vector<T> makeV(const T &initValue, size_t sz) {
return vector<T>(sz, initValue);
}
template <class T, class... Args>
inline auto makeV(const T &initValue, size_t sz, Args... args) {
return vector<decltype(makeV<T>(initValue, args...))>(sz, makeV<T>(initValue, args...));
}
template <class T>
inline istream& operator>> (istream &is, vector<T> &vec) {
for (auto &e : vec) is >> e;
return is;
}
inline void read() {}
template <class Head, class... Tail>
inline void read(Head &head, Tail&... tail) { cin >> head; read(tail...); }
inline void print() { cout << "\n"; }
template <class Head, class... Tail>
inline void print(Head &&head, Tail&&... tail) {
cout << head;
if (sizeof...(tail)) cout << ' ';
print(forward<Tail>(tail)...);
}
template <class T>
inline ostream& operator<< (ostream &os, const vector<T> &vec) {
static constexpr const char *delim[] = { " ", "" };
for (const auto &e : vec) os << e << delim[&e == &vec.back()];
return os;
}
signed main() {
ios_base::sync_with_stdio(false); cin.tie(nullptr);
VAR(int, a, b);
if (a <= 5) {
print(0);
} else if (a >= 6 && a <= 12) {
print(b / 2);
} else {
print(b);
}
return 0;
}
