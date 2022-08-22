#include <bits/stdc++.h>
#define FOR(i,a,n) for(ll i = (ll)a; i < (ll)n; i++)
#define FORR(i,n) for(ll i = (ll)n - 1LL; i >= 0LL; i--)
#define rep(i,n) FOR(i, 0, n)
#define ALL(x) begin(x), end(x)
using namespace std;
using ll = long long;
constexpr ll Mod = 998244353;
constexpr ll mod = 1e9 + 7;
constexpr ll inf = 1LL << 60;
const double PI = acos(-1);
template <typename T> constexpr bool chmax(T &a, const T &b) {
if(a >= b) return false;
a = b;
return true;
}
template <typename T> constexpr bool chmin(T &a, const T &b) {
if(a <= b) return false;
a = b;
return true;
}
int main() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
int x, y;
cin >> x >> y;
cout << (x * 2 <= y && y <= x * 4 && y % 2 == 0 ? "Yes" : "No");
return 0;
}
