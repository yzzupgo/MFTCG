#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool ans = false;
for (int i = 0; i <= x; i++) {
if (i * 4 + (x - i) * 2 == y) {
ans = true;
}
}
if (ans) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
