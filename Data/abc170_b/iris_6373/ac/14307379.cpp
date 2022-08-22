#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x,y;
float z,w;
cin >> x >> y;
if (y % 2 != 0) cout << "No";
else
{
z = y/2 - x;
w = 2*x - y/2;
if (w+z == x && w >= 0 && z >= 0) cout << "Yes";
else cout << "No";
}
return 0;
}
