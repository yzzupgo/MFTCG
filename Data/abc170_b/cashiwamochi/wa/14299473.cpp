#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
if (y % 2 == 0) {
if (4*x >= y)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
