#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t = 1;
void solve() {
int x, y;
cin >> x >> y;
if (y >= 2 * x && y <= 4 * x && y % 2 == 0) {
cout << "Yes" << endl;
}else {
cout << "No" << endl;
}
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
freopen("data.in", "r", stdin);
while (t--) solve();
return 0;
}
