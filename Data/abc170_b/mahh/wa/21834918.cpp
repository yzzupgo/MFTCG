#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
if (X * Y > 2 * X && X * Y % 2 == 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
