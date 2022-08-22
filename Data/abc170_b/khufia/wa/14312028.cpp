#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 1e9 + 7;
void solve () {
int z1, z2;
cin >> z1 >> z2;
int y;
if ((z2 - 2*z1) % 2 == 0) {
y = (z2 - 2*z1)/2;
}
else {
cout << "NO";
return;
}
int x = z1 - y;
if (x < 0 || y < 0) {
cout << "NO";
return;
}
if (x + y == z1 && 2*x + 4*y == z2 && (x > 0 || y > 0)) {
cout << "YES";
}
else {
cout << "NO";
}
}
int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tt = 1;
while (tt--)
solve();
}
