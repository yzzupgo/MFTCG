#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 1; i <= x; i++) {
for (int j = x - i; j <= x; j++) {
if (2 * i + 4 * j == y) {
cout << "Yes" << endl;
return 0;
}
}
}
if (x == 1) {
if (y == 2) {
cout << "Yes" << endl;
return 0;
} else if (y == 4) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
