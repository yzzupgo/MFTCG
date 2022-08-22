#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
cin.tie(nullptr)->sync_with_stdio(false);
int a, b; cin >> a >> b;
if (b - 2 * a < 0 || 4 * a - b < 0) cout << "No";
else cout << "Yes";
}
