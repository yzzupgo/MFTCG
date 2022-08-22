#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y % 2 != 0 || y / x > 4 || x * 2 > y)
cout << "No" << endl;
else
if ((y % x) % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
