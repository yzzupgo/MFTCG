#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool isRight = false;
for (int i = 0; i <= x; i++) {
int num_of_leg = 2 * i + (x - i) * 4;
if (num_of_leg == y) {
isRight = true;
}
}
if (isRight) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
