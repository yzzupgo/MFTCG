#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;
int main() {
ios::sync_with_stdio(false);cin.tie(0);
int x,y;
cin >> x >> y;
bool flg = false;
if (y % 2 == 1) {
cout << "No\n";
return 0;
}
for (int i = 0; i <= x; i++) {
for (int j = 0; j <= x - i; j++) {
if (i + j == x && i * 2 + j * 4 == y) {
flg = true;
break;
}
}
if (flg == true) {
break;
}
}
if (flg == true) {
cout << "Yes\n";
}
else {
cout << "No\n";
}
return 0;
}
