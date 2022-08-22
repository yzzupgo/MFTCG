#include <bits/stdc++.h>
#include <cmath>
using ll = long long;
const ll INF = __LONG_LONG_MAX__;
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int z = 2 * x;
z = y - z;
if(z % 2 == 0 && z / 2 <= x && z >= 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
