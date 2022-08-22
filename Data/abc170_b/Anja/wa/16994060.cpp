#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
if (y % 2 == 0 && 2 * x <= y && 4 & x >= y) {
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
return 0;
}
