#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int j = (4 * x) - y;
if (4 * x == y || 2 * x == y) {
cout << "Yes" << "\n";
} else if (j > 0 || 2 * x <= y) {
if (j > 0 && j % 2 == 0)
cout << "Yes" << "\n";
} else {
cout << "No" << "\n";
}
}
