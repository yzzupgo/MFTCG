#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
int i = y - 2 * x;
if (i>=0 && i<=x)
{
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
