#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
string ans = "No";
for (int i = 0; i < x; i++) {
if (i*4 + (x-i)*2 == y) {
ans = "Yes";
break;
}
}
cout << ans << endl;
return 0;
}
