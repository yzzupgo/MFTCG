#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int a = x * 2;
int b = 0;
for (int i = 1; i <= x; i++) {
if (2 * i + a == y) {
b = 1;
break;
}
}
if (b == 1) {
cout << "Yes" << endl;
}
else if (b == 0) {
cout << "No" << endl;
}
}
