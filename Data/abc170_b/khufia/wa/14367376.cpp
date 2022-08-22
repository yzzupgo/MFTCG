#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 1e9 + 7;
void solve () {
int z1, z2;
cin >> z1 >> z2;
int x, y;
bool ok = 0;
if (z2 < 2*z1 || z2 > 4*z1) {
cout << "NO";
return;
}
if ((z2 - 2*z1)%2) {
cout << "NO";
return;
}
cout << "YES";
}
int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int tt = 1;
while (tt--)
solve();
}
