#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization("Ofast")
#pragma GCC optimization("unroll-loops")
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<vpll> vvpll;
typedef unordered_map<ll, ll> um;
typedef unordered_set<ll> us;
#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ts ll t; in(t) while (t--) solve();
#define ks ll t; in(t) FOR(i, 1, t+1) out("Case #" << i << ": " << solve());
#define endl '\n'
#define ln cout << endl;
#define in(x) cin >> x;
#define out(x) cout << x << endl;
#define flush cout << flush;
#define reset(a,b) memset(a, b, sizeof(a));
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define FOR(i,a,b) for (ll i = a; i < b; i++)
#define FORI(i,a,b,c) for (ll i = a; i < b; i += c)
#define FORD(i,a,b) for (ll i = a; i > b; i--)
#define FOREACH(it,v,r) for (auto it = v.begin() + r; it != v.end(); it++)
#define FORALL(it,v) for (auto it : v)
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define vin(v,x) vll v(x); FOR(i, 0, x) in(v[i])
#define all(v) v.begin(), v.end()
#define allr(v,r) v.begin(), v.begin() + r
#define showv(v) FORALL(it, v) cout << it << ' '; ln
#define printv(v) FORALL(it, v) out(it)
#define show2d(v) FORALL(it, v) { FORALL(j, it) cout << j << ' '; ln}
#define showm(v) FORALL(it, v) cout << it.F << ": " << it.S << ' '; ln
#define sortv(v) sort(all(v));
#define revv(v) reverse(all(v));
#define maxv(v) *max_element(all(v))
#define minv(v) *min_element(all(v))
#define gcd __gcd
#define checkbit(n,i) (n >> i) & 1
#define bitcount __builtin_popcount
#define firstbitindex __builtin_ctz
#define lastbitindex __builtin_clz
#define bitparity __builtin_parity
#define findv(v,x) (find(all(v), x) != v.end())
#define findsm(u,x) (u.find(x) != u.end())
#define findstr(s,x) (s.find(x) != string::npos)
#define sz(a) a.size()
#define precise(x) cout << fixed << setprecision(x);
const ll MAXN = 1e6 + 5, MOD = 998244353, SIZE = 2e7, INF = 0x7f7f7f7f7f7f7f7f;
const double EPS = 1e-9, PI = acos(-1);
const int INFi = 0x7f7f7f7f;
void solve()
{
double x, y, X, Y;
in(X >> Y)
Y /= 2;
X = 2 * x - y;
Y = y - x;
if (X + Y == x && X >= 0 && Y >= 0)
out("Yes")
else
out("No")
}
int main()
{
fastio
solve();
return 0;
}
