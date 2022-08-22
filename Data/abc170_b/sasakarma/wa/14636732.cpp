#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
int x, y;
cin >> x;
cin >> y;
int val = 4 * x - y;
if (val >= 0 && val % 2 == 0)
{
cout << "Yes\n";
}
else
{
cout << "No\n";
}
return 0;
}
