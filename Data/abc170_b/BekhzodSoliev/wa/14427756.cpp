#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <set>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
int b = (y - 2 * x) / 2;
int a = x - b;
if (a >= 0 && b >= 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
