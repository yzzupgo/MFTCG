#include <bits/stdc++.h>
using namespace std;
int main () {
int x, y;
cin >> x >> y;
if (x == 1) {
y == 4 || y == 2 ? cout << "Yes\n" : cout << "No\n";
return 0;
}
if (y <= 1) {
cout << "No\n";
return 0;
}
(((y - 2) % (x - 1) == 0 && (x - 1) * 4 == (y - 2)) || ((y - 4) % (x - 1) == 0 && (x - 1) * 2 == (y - 4))) ? cout << "Yes\n" : cout << "No\n";
return 0;
}
