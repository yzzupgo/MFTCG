#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
cin.tie(nullptr)->sync_with_stdio(false);
int x, y;
cin >> x >> y;
if ((int((x - 2 * y) / 2) == (x - 2 * y) / 2 && int((4 * x - y) / 2) == (4 * x - y) / 2) && y <= 4 * x && y >= 2 * x)cout << "Yes\n";
else cout << "No\n";
}
