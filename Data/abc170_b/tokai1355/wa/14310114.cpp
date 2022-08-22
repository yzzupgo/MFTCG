#include <iostream>
#include <string>
using namespace std;
int main()
{
int a, b, c, d, e, x, y;
cin >> x >> y;
a = x * 2;
b = x * 4;
c = y % 2;
if (c == 0) d = 0;
else d = 1;
if (d == 1) cout << "No";
if (a <= y) {
if (b >= y) cout << "Yes";
else cout << "No";
}
else cout << "No";
return 0;
}
