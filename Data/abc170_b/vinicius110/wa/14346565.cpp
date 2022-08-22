#include <iostream>
#include <algorithm>
using namespace std;
int x, y, restT, restC, divT, divC;
int main ()
{
cin >> x >> y;
if(4*x >= y && y%2 != 1)
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
