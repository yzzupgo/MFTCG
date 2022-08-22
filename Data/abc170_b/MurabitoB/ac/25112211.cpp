#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
cin.tie(nullptr)->sync_with_stdio(false);
int a, b; cin >> a >> b;
if (b >= 2 * a && b % 2 == 0 && b <= 4 * a) cout << "Yes";
else cout << "No";
}
