#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool ans = false;
for (int i = 1; i <= x; i++) {
if ((i*2 + (x-i)*4) == y) ans = true;
}
if (ans) cout << "Yes\n";
else cout << "No\n";
return 0;
}
