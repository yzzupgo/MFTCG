#include <bits/stdc++.h>
#include <random>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x, y; cin >> x >> y;
if (y >= 2 * x && (y - 2 * x) % 2 == 0 && 4 * x >= y && (4 * x - y) % 2 == 0) cout << "Yes\n";
else cout << "No\n";
return 0;
}
