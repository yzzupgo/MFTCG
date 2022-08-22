#include <math.h>
#include <assert.h>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
#include <functional>
template <typename T>
void in(T& x) {
std::cin >> x;
}
template <typename T>
void out(const T H) {
std::cout << (H);
}
template <typename T1, typename... T2>
void out(const T1 H, const T2... T) {
std::cout << (H) << " "; out(T...);
}
template <typename T1, typename T2>
std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& v) {
return os << v.first << " " << v.second;
}
template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
int n = (int) v.size();
for (int i = 0; i < n - 1; ++i) os << v[i] << ' ';
return os << v[n - 1];
}
template <typename T>
void eout(const char *s, const T H) {
std::cerr << s << "=" << H << "\n";
}
template <typename T1, typename... T2>
void eout(const char *s, const T1 H, const T2... T) {
while (*s != ',') std::cerr << *s++;
std::cerr << "=" << H << " | "; eout(++s, T...);
}
#define nl std::cout << "\n"
#define err(args...) eout(#args, args)
#define inn(x) int x; in(x)
#define rep(i,n) for (int i = 0 ; i < (n); ++i)
#define per(i,n) for (int i = (n) - 1; i > -1; --i)
#define repr(i,l,r) for (int i = (l); i < (r); ++i)
#define sz(v) ((int) v.size())
#define all(v) (v).begin(), (v).end()
#define lla(v) (v).rbegin(), (v).rend()
#define no std::cout << "NO\n"
#define yes std::cout << "YES\n"
const int INF = 2147483647;
const long long int LNF = 9223372036854775807LL;
using ll = long long int;
using vi = std::vector<int>;
using vb = std::vector<bool>;
using ii = std::pair<int, int>;
using iii = std::pair< ii, int>;
using vii = std::vector<ii>;
const int N = 505050;
const int MD = 1000*1000*1000 + 7;
int solve();
int main() {
std::ios_base::sync_with_stdio(0); std::cin.tie(0);
solve();
return 0;
}
int solve() {
inn(a); inn(b);
out(std::max(a*b, std::max(a - b, a+b)));
return 0;
}
