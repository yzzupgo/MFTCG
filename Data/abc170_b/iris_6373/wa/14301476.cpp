#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x,y;
float z;
cin >> x >> y;
if (y % 2 != 0) cout << "No";
else
{
z = y/2 - x;
if (floor(z) == ceil(z)) cout << "Yes";
}
return 0;
}
