#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <iomanip>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#define endl "\n";
#define int long long
#define debug(x) cout << #x << " is " << x << endl;
using namespace std;
void solve() {
int x, y;
cin >> x >> y;
while (x * 2 != y and x > 0) {
x--;
y -= 4;
}
if (x * 2 == y) cout << "Yes";
else cout << "No";
}
signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
cout << fixed << setprecision(15);
int t;
t = 1;
while (t--) {
solve();
}
return 0;
}
