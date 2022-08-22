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
int j = x - i;
if (0<=i && i<=x && 0<=j && j<=x)
{
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
