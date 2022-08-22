#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool a = false;
for (int i = 0; i < x; i++) {
if (i * 2 + (x - i) * 4 == y) {
a = true;
}
}
if (a) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
