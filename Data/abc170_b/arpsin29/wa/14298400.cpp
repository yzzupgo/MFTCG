# include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
void solve() {
int x, y;
cin >> x >> y;
if ((4 * x - y) % 2 == 0 && (4 * x >= y)) {
cout << "Yes" << endl;
return;
}
cout << "No" << endl;
return;
}
signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
# ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
# endif
solve();
return 0;
}
