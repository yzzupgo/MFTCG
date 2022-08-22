#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
int _x, _y;
cin >> _x >> _y;
float x = _x;
float y = _y;
if (_y % 2 == 1) {
cout << "No" << endl;
return 0;
}
const int a = -x + y / 2.0;
const int b = 2.0 * x - y / 2.0;
if ( 0 <= a && a <= x) {
if ( 0 <= b && b <= x) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
else {
cout << "No" << endl;
}
return 0;
}
