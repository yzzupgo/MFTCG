#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
if (y&1 || y > 4*x) cout << "No";
else cout << "Yes";
return 0;
}
