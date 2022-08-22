#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
int32_t main() {
IOS;
int x, y, c = 0, t;
cin >> x >> y;
bool valid = false;
t = x;
while (t >= 0) {
if ( t * 4 + c * 2 == y) {
valid = true;
break;
}
else
t--, c++;
}
if (valid)
cout << "YES\n";
else
cout << "NO\n";
return 0;
}
