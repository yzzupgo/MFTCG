#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y, r;
cin >> x >> y;
bool b = false;
r = x * 2;
if (y % 2 == 1 || y < 2 || r > y) {
cout << "No" << endl;
return 0;
}
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
