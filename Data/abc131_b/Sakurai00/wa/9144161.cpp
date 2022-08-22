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
for (int i = 0; i < n - 1; i++) {
a[i] = l + i;
}
sort(all(a));
int ans = 0;
for (int i = 1; i < n - 1; i++) {
ans += a[i];
}
cout << ans << endl;
return 0;
}
