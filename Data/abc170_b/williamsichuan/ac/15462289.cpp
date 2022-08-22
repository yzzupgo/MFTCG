#include <iostream>
#include <string>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
string ans = "No";
for (int c = 0; c <= x; c++) {
int t = x - c;
if (c * 2 + t * 4 == y) {
ans = "Yes";
break;
}
}
cout << ans << endl;
return 0;
}
