#include <bits/stdc++.h>
#define int long long
#define double long double
#define ff first
#define ss second
#define endl '\n'
#define ii pair<int, int>
#define mp make_pair
#define mt make_tuple
#define DESYNC \
ios_base::sync_with_stdio(false); \
cin.tie(0); \
cout.tie(0)
#define pb push_back
#define vi vector<int>
#define vii vector<ii>
#define all(x) x.begin(), x.end()
#define EPS 1e-9
#define INF 1e18
#define ROOT 1
#define M 1000000007
#define curtime chrono::steady_clock::now().time_since_epoch().count
#define rep(i,beg,n,s) for (int i = beg; i < n; i += s)
const double PI = acos(-1);
using namespace std;
inline int mod(int n, int m) {
int ret = n % m;
if (ret < 0) ret += m;
return ret;
}
int gcd(int a, int b) {
if (a == 0)
return b;
else
return gcd(b % a, a);
}
void solution() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
if (i * 2 + (x - i) * 4 == y) {
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
}
int32_t main() {
DESYNC;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int t = 1;
#ifdef MULTIPLE_TEST_CASE
cin >> t;
#endif
while (t--) solution();
}
