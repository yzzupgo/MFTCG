#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) begin(x),end(x)
#define forn(i,n) for (int i = 0; i < n; ++i)
#define rforn(i,n) for (int i = n - 1; i >= 0; --i)
const int N = 2e5 + 5;
const int M = 1e9 + 7;
const char nl = '\n';
template< typename T > inline T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }
template< typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template <class T> void ckmin(T& a, T b) {a = min(a, b);}
template <class T> void ckmax(T& a, T b) {a = max(a, b);}
template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= 100; ++i) {
for (int j = 0; j <= 100; ++j) {
if (i * 2 + j * 4 == y && i + j == x) {
cout << "Yes" << nl;
return;
}
}
}
cout << "No" << nl;
}
int main() {
ios_base::sync_with_stdio(0); cin.tie(0);
int t = 1;
for (int i = 1; i <= t; ++i) {
solve();
}
return 0;
}
