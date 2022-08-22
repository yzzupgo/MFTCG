#include <bits/stdc++.h>
namespace {
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using uint = unsigned int;
template<typename T> using vec = vector<T>;
template<typename T> using vvec = vec<vec<T>>;
const ll LMAX = numeric_limits<ll>::max();
const ll LMIN = numeric_limits<ll>::min();
const int IMAX = numeric_limits<int>::max();
const int IMIN = numeric_limits<int>::min();
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define overload2(_1,_2,name,...) name
#define INT(...) int __VA_ARGS__;in(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;in(__VA_ARGS__)
#define ULL(...) ull __VA_ARGS__;in(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;in(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;in(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;in(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;in(__VA_ARGS__)
#define VEC(type,name,size) vec<type> name(size); in(name)
#define VV(type,name,h,w) vvec<type>name(h,vec<type>(w)); in(name)
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define each(i,c) for (auto&& i : (c))
#define itr(c) for (auto it = begin(c); it != end(c); ++it)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
template<class T> void scan(T& a){ cin >> a; }
template<class T> void scan(vec<T>& a, int n){ a.resize(n); for(auto&& i : a) scan(i); }
template<class T> void scan(vec<T>& a){ scan(a, a.size()); }
template<class T> void scan(vvec<T>& a){ for(auto&& v : a) scan(v); }
void in(){}
template <class Head, class... Tail> void in(Head& head, Tail&... tail){ scan(head); in(tail...); }
template <typename T> void out_impl(ostream& os, T&& t) { os << t << endl; }
template <typename T> void outh_impl(ostream& os, T&& t) { os << t << " "; }
template <typename T, typename... Args> void out_impl(ostream& os, T&& head, Args&&... tail) { outh_impl(os, head); out_impl(os, tail...); };
template <typename T, typename... Args> void out(T&& head, Args&&... tail) { out_impl(cout, head, tail...); }
template <typename T, typename... Args> void debug(T&& head, Args&&... tail) {
#ifdef __DEBUG__
out_impl(cerr, "[DEBUG]", head, tail...);
#endif
}
template <typename Cont> ostream& write(ostream& os, const Cont& c) {
itr(c) { os << ((it == c.begin()) ? "" : " ") << *it; }
return os;
}
template <typename T> ostream& operator<<(ostream& os, const vector<T>& c) { return write(os, c); }
template <typename T> ostream& operator<<(ostream& os, const list<T>& c) { return write(os, c); }
template <typename Cont> auto sum(const Cont& c) { return accumulate(all(c), 0LL); };
template <typename Cont> auto max(const Cont& c) { return *max_element(all(c)); };
template <typename Cont> auto min(const Cont& c) { return *min_element(all(c)); };
template<class T, class U> bool chmin(T& a, const U& b){ if(a > b){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < b){ a = b; return 1; } return 0; }
template <typename N> bool is_even(N n) { return n % 2 == 0; }
template <typename N> bool is_odd(N n) { return !is_even(n); }
void YES(bool b=true) { out(b? "YES" : "NO"); }
void Yes(bool b=true) { out(b? "Yes" : "No"); }
void yes(bool b=true) { out(b? "yes" : "no"); }
void NO(bool b=true) { YES(!b); }
void No(bool b=true) { Yes(!b); }
void no(bool b=true) { yes(!b); }
}
#define __ATCODER__ 1
#if __ATCODER__ == 1
void solve(long long X, long long Y) {
rep(i, 0, X+1) {
ll y = i * 2 + (X-i) * 4;
if (Y == y) {
Yes();
return;
}
}
No();
}
#else
void solve() {
}
#endif
int main() {
#if __ATCODER__ == 1
long long X;
scanf("%lld",&X);
long long Y;
scanf("%lld",&Y);
solve(X, Y);
#else
rep(10) {
solve();
debug("*****");
}
#endif
return 0;
}
