#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll MOD = 1e9 + 7;
double eps = 1e-12;
#define forn(i,e) for (ll i = 0; i < e; i++)
#define forsn(i,s,e) for (ll i = s; i < e; i++)
#define rforn(i,s) for (ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define INF 2e18
#define fast_cin() \
ios_base::sync_with_stdio(false); \
cin.tie(NULL); \
cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()
#define sz(x) ((ll)(x).size())
char moves[4] = {'L', 'U', 'R', 'D'};
int dx[4] = {0, -1, 0, 1};
int dy[4] = { -1, 0, 1, 0};
void solve() {
int n;
cin >> n;
vi arr(n);
map<int, int> m;
forn(i, n) {
cin >> arr[i];
}
int i = 0, j = n - 1;
while(i < j) {
if(arr[i] != arr[j]) {
m[arr[i]]++;
m[arr[j]]++;
}
i++, j--;
}
int max_freq = INT_MIN;
for(auto x : m) {
max_freq = min(max_freq, x.second);
}
if(max_freq - sz(m) + 1 <= 0) {
max_freq = INT_MAX;
}
if(m.size()) {
cout << min(sz(m) - 1, ll(max_freq));
} else {
cout << 0;
}
}
int main() {
fast_cin();
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t = 1;
for(int it = 0; it < t; it++) {
solve();
}
return 0;
}
