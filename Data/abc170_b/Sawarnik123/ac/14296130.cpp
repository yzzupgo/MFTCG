#include "bits/stdc++.h"
#define int long long
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
#define db(x) cerr << #x << ": " << x << '\n';
#define read(a) int a; cin >> a;
#define reads(s) string s; cin >> s;
#define readb(a,b) int a, b; cin >> a >> b;
#define readc(a,b,c) int a, b, c; cin >> a >> b >> c;
#define readarr(a,n) int a[(n) + 1] = {}; FOR(i, 1, (n)) {cin >> a[i];}
#define readmat(a,n,m) int a[n + 1][m + 1] = {}; FOR(i, 1, n) {FOR(j, 1, m) cin >> a[i][j];}
#define print(a) cout << a << endl;
#define printarr(a,n) FOR (i, 1, n) cout << a[i] << " "; cout << endl;
#define printv(v) for (int i: v) cout << i << " "; cout << endl;
#define printmat(a,n,m) FOR (i, 1, n) {FOR (j, 1, m) cout << a[i][j] << " "; cout << endl;}
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define rz(v,n) v.resize((n) + 1);
#define pb push_back
#define fi first
#define se second
#define vi vector <int>
#define pi pair <int, int>
#define vpi vector <pi>
#define vvi vector <vi>
#define setprec cout << fixed << showpoint << setprecision(20);
#define FOR(i,a,b) for (int i = (a); i <= (b); i++)
#define FORD(i,a,b) for (int i = (a); i >= (b); i--)
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
readb(x, y);
FOR (i, 0, 100)
FOR (j, 0, 100)
{
if (i + j == x && 2*i + 4*j == y) {cout << "Yes"; return 0;}
}
cout << "No";
}
