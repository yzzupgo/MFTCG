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
if (y%2==0)
{
int i = (y - 2 * x);
int j = x - i;
if (i>=0 && j>=0)
{
cout << "Yes";
}
else {
cout << "No";
}
}
else {
cout << "No";
}
return 0;
}
