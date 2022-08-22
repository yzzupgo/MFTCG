#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
ios::sync_with_stdio(false);
cin.tie();
cout.tie();
int x, y;
cin >> x >> y;
if(y % 2 == 0) {
if(y <= 4*x) cout << "Yes\n";
else cout << "No\n";
}
else cout << "No\n";
return 0;
}
