#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (x * 2 == y || x * 4 == y)
cout << "Yes" << "\n";
else if (x * 4 - y < 0 || x * 2 > y)
cout << "No" << "\n";
else if ((x * 4 - y) % 2 == 0)
cout << "Yes" << "\n";
else
cout << "No" << "\n";
}
