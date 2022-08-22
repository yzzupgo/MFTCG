#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int x, y; cin >> x >> y;
bool ok=false;
for (int i = 0; i <= x; i++) {
if (y == (i * 2) + (x-i)*4) {
ok = true;
break;
}
}
cout << (ok ? "Yes" : "N0") << endl;
}
