#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;
void check(int x, int y) {
for (int i = 0; i <= x; i++)
{
if (i * 4 + 2 * (x - i) == y)
{
cout << "Yes";
return;
}
}
cout << "No";
}
int main()
{
int x, y;
cin >> x >> y;
check(x, y);
return 0;
}
