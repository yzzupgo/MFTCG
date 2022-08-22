#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);
long x, y;
cin >> x >> y;
long b = (y - 2 * x) / 2;
if (y > x && y % 2 == 0 && x - b >= 0) cout << "Yes\n";
else cout << "No\n";
return 0;
}
