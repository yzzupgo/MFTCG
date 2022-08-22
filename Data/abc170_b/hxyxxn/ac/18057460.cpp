#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
bool valid = (y % 2 == 0) && (2 * x <= y && y <= 4 * x);
cout << (valid ? "Yes" : "No") << '\n';
return 0;
}
