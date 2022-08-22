#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
bool ans = false;
for (int i = 0; i <= x && !ans; ++i)
if (2 * i + 4 * (x - i) == y)
ans = true;
cout << (ans ? "YES\n" : "NO\n");
}
