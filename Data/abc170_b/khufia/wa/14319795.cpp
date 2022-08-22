#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 1e9 + 7;
void solve () {
int z1, z2;
cin >> z1 >> z2;
if (z2 < 2*z1 || z2 > 4*z1) {
cout << "NO";
return;
}
int x, y;
bool ok = 0;
y = (z2 - 2*z1)/2;
if ((z2 - 2*z1) % 2 == 0) {
ok = 1;
}
x = z1 - y;
if (x + y == z1 && 2*x + 4*y == z2 && (x >= 0 && y >= 0)) {
ok = 1;
}
else {
ok = 0;
}
puts(ok ? "YES" : "NO");
}
int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tt = 1;
while (tt--)
solve();
}
