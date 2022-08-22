#include <iostream>
#include <vector>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int b = (y - 2 * x) / 2;
int a = x - b;
if (a >= 0 && b >= 0 && (a + b) == x)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
