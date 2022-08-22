#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define mk make_pair
#define fast \
ios_base::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0);
#define rep(i,a,b) for (ll i = a; i < b; i++)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
#define sz(x) (int)x.size()
#define mem(a,val) memset(a, val, sizeof(a))
#define deci(x) cout << fixed << setprecision(x);
#define bitcount(x) __builtin_popcountll(x)
const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
const long long int mod = 1e9 + 7;
const long double EPS = 1e-12;
const int N = 1e5 + 20;
void solve() {
ll x, y;
cin >> x >> y;
if ((2 * x) > y || (4 * x) < y || (y % 2)) {
cout << "No";
return;
}
cout << "Yes";
}
int main() {
fast;
ll t;
t = 1;
while (t--) {
solve();
}
return 0;
}
