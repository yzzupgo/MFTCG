#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t = 1;
void solve() {
int x, y;
cin >> x >> y;
if (x == 1) {
if (y == 2 || y == 4) {
cout << "Yes" << endl;
}else {
cout << "No" << endl;
}
return;
}
if ((y-2)/4 == (x-1) || (y-4)/2 == (x-1)) {
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
