#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y, r;
cin >> x >> y;
bool b = false;
if (y % 2 == 1 || y < 2) cout << "No" << endl;
r = x * 2;
if (r > y) cout << "No" << endl;
for (int i = 0; i < x; i++) {
if (r == y) {
b = true;
break;
}
r += 2;
}
if (b) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
