#include <iostream>
#include <algorithm>
#define int long long int
using namespace std;
signed main() {
int x, y;
cin >> x >> y;
for (int i = 0; i < x; i++) {
if ((x - i) * 4 + 2 * i == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
