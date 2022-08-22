#include <iostream>
#include <vector>
using namespace std;
#define int int64_t
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
if (x < y/4 || x>y/2) {
cout << "No";
return 0;
}
if (y%2 == 1) {
cout << "No";
return 0;
}
cout << "Yes";
return 0;
}
