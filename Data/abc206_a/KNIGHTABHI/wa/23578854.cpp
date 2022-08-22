#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int> >
#define mk(arr,n,type) type *arr = new type[n]
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define int long long
#define ld long double
#define nn '\n'
#define w(t) cin>>tc; while(tc--)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
#define all(x) x.begin(), x.end()
#define fill(a,b) memset(a, b, sizeof(a))
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define PI 3.1415926535897932384626
#define inf 1e18
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
int mpow(int base, int exp);
int lcm(int a, int b);
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
vi g[N];
void sol() {
int i, j, k, n, x, y, z, m, tc = 1;
cin >> n;
ld ans = float(1.08 * n);
if(ans > 206) {
cout << ":(";
} else if(ans == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
sol();
return 0;
}
int mpow(int base, int exp) {
base %= mod;
int result = 1;
while(exp > 0) {
if(exp & 1) {
result = (result * base) % mod;
}
base = (base * base) % mod;
exp >>= 1;
}
return result;
}
int lcm(int a, int b) {
int g = __gcd(a, b);
return a / g * b;
}
void ipgraph(int m) {
int i, u, v;
while(m--) {
cin >> u >> v;
g[u - 1].pb(v - 1);
g[v - 1].pb(u - 1);
}
}
void dfs(int u, int par) {
for(int v : g[u]) {
if(v == par) {
continue;
}
dfs(v, u);
}
}
