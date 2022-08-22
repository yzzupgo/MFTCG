#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
bool ok = false;
for (int a = 0; a <= y - x; a++) {
if ((y - x - a) % 3 == 0) {
int b = (y - x - a) / 3;
if (a + b == x && 2 * a + 4 * b == y) {
ok = true;
}
}
}
cout << (ok ? "Yes" : "No") << '\n';
return 0;
}
