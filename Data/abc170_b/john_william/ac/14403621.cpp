#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y % 2 != 0 || x * 4 < y || x * 2 > y)
cout << "No" << endl;
else
cout << "Yes" << endl;
}
