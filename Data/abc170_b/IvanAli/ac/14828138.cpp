#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
if ((y - 2 * x) % 2 == 0 && y >= 2 * x && (y - 2 * x) / 2 <= x) {
cout << "Yes\n";
} else {
cout << "No\n";
}
return 0;
}
