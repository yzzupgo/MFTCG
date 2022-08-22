#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve () {
int x, y;
cin >> x >> y;
if (y < x || y & 1) {
cout << "No" << endl;
return;
}
for (int i = 0; i * 4 <= y; i++) {
if ((y - (i * 4)) % 2 == 0) {
cout << "Yes" << endl;
return;
}
}
cout << "No" << endl;
}
int main () {
solve();
return 0;
}
