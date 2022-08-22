#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
int X, Y;
cin >> X >> Y;
int b = Y - 2 * X;
if (2 * X <= Y && Y <= 4 * X && Y % 2 == 0 && b % 2 == 0)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
