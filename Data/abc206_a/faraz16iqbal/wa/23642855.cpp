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
int cnt = 0;
const int N = 2e5 + 10;
int parent[N], s[N];
int find_set(int v) {
if(v == parent[v]) {
return v;
}
return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
a = find_set(a);
b = find_set(b);
if(a != b) {
if(s[a] < s[b]) {
swap(a, b);
}
cnt++;
parent[b] = a;
s[a] += s[b];
}
return;
}
void solve() {
int n;
cin >> n;
vi arr(n);
map<int, int> m;
forn(i, n) {
cin >> arr[i];
}
forn(i, n + 1) {
parent[i] = i;
s[i] = 1;
}
int i = 0, j = n - 1;
while(i < j) {
union_sets(arr[i], arr[j]);
i++, j--;
}
cout << cnt ;
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
