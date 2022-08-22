#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int crane = (4 * x - y) / 2;
int turtle = (y - 2 * x) / 2;
if (crane >= 0 && turtle >= 0) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
