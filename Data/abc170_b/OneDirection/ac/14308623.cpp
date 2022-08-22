#include <iostream>
#include <vector>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int b = (y - 2 * x) / 2;
int a = x - b;
if (a >= 0 && b >= 0 && (a + b) == x && (2 * a + 4 * b) == y)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
