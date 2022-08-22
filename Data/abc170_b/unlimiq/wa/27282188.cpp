#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
constexpr int N = 1e5 + 5;
constexpr int mod = 1e9 + 7;
constexpr int LOG = 18;
constexpr ll MAXLL = 1e18 + 1;
template<typename T> void dout(const T& x) { cout << x << ' '; }
template<typename T, typename ...Ts> void dout(const T& v, const Ts&... args) { dout(v); dout(args...); }
template<typename ...Ts> void vout(const Ts&... args) { dout(args...); cout << endl; exit(0); }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void Solve() {
int x, y;
cin >> x >> y;
cout << ((y & 1) == 0 && x >= y / 4 && x <= y / 2 ? "Yes" : "No") << endl;
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int tests = 1;
int test_num = 0;
while(tests--) {
Solve();
}
return 0;
}
