#include <iostream>
#include <string>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i < 100; i++) {
if (y / 4 >= 0) {
y = y / 4;
x--;
}
else if (y / 2 >= 0) {
y = y / 2;
x--;
}
if (x == 0) {
break;
}
}
if (y == 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
