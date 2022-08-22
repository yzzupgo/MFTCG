#include <iostream>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
cout << (2 * x <= y && y <= 4 * x && y % 2 == 0 ? "YES" : "NO");
return 0;
}
