#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using llint = long long;
using vint = vector<int>;
using vvint = vector<vector <int>>;
const llint INF = 1e9;
const llint llINF = 1e18;
int main () {
int n, l; cin >> n >> l;
vint a(n);
for (int i = 0; i < n; i++) {
a[i] = l + i;
}
int bite = INF;
for (int i = 0; i < n; i++) {
bite = min(bite, abs(a[i]));
}
int ans = 0;
for (int i = 0; i < n; i++) {
ans += a[i];
}
cout << ans - bite << endl;
return 0;
}
