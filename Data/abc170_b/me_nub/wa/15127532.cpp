#include <bits/stdc++.h>
using namespace std;
#define f(i,k,n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define pb push_back
#define fr first
#define sc second
#define len(s) s.size()
#define all(v) v.begin(), v.end()
#define tr(it,v) for (auto &it : v)
#define bit(x) __builtin_popcount(x)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
void impgraph(int n, int m);
void dfs(int u,int par);
const int mod = 1e7;
const int N = 3e5 + 1;
vi g[N];
int a[N];
void solve()
{
int n, m, ans = 0, k=0;
cin>>n>>m;
f(i,0,n) {
ans=0;
ans+=i*2+(n-i)*4;
if(ans==m) {
cout<<"YES";
return;
}
}
cout<<"NO";
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t = 1;
while (t--)
solve();
return 0;
}
void impgraph(int n, int m)
{
int i, u, v;
while (m--)
{
cin >> u >> v;
g[u].pb(v);
g[v].pb(u);
}
}
void dfs(int u,int par)
{
a[u] = 1;
for (int v : g[u])
{
if (a[v])
continue;
dfs(v,0);
}
}
