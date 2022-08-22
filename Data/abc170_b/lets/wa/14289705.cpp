#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
for (int i = 0; i < 100; i++) {
for (int j = 0; j < 100; j++) {
if (2 * i + 4 * j == y && i + j == x) {
cout << "YES" << '\n';
return 0;
}
}
}
cout << "NO" << '\n';
return 0;
}
