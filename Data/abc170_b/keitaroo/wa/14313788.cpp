#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
if (Y % 2 == 1 || Y > 4 * X)
{
cout << "No" << endl;
}
else{
cout << "Yes" << endl;
}
return 0;
}
