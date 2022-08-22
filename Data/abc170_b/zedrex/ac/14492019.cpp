#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y, a, b;
cin >> x >> y;
b = y / 2 - x;
a = x - b;
if (a + b == x and 2 * a + 4 * b == y and a >= 0 and b >= 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
