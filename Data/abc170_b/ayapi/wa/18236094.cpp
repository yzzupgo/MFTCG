#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int x, y;
cin >> x >> y;
y /= 2;
if (y <= 2 * x) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
