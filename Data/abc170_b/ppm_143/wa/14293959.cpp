#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long
#define ld long double
#define sb __builtin_popcount
#define vi vector<int>
#define vc vector<char>
#define ii pair<int, int>
#define pq priority_queue<ii, vector<ii>, greater<ii>>
#define vii vector<ii>
#define sz(a) int((a).size())
#define for0(i,n) for (int i = 0; i < n; i++)
#define for1(i,n) for (int i = 1; i <=n; i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rloop(i,a,b) for(int i=a;i>=b;i--)
#define in(a,b) (b.find(a) != string::npos)
#define minin(a) *min_element(all(a))
#define maxin(a) *max_element(all(a))
#define X first
#define Y second
#define fill(a,x) memset(a, x, sizeof(a))
#define pb push_back
#define pf push_front
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) reverse(v.begin(), v.end())
#define el "\n"
#define mx3(a,b,c) max(max(a, b), c)
#define mn3(a,b,c) min(min(a, b), c)
#define S(v) accumulate(all(v), (ll)0)
#define SP(n) cout.precision(n)
#define PI = atan(1.0) * 4.0;
#define MOD = 1e9 + 7;
void start() {
fio;
SP(10);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int32_t main() {
start();
int n, m;
cin >> m >> n;
for (int i = 1; i <= 100; i++) {
for (int j = 1; j <= 100; j++) {
if ( (2 * i + 4 * j) == n && (i + j) == m) {
cout << "Yes" << el;
return 0;
}
}
}
cout << "No";
return 0;
}
