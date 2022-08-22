#include <iostream>
#include <algorithm>
using namespace std;
int x, y;
int main ()
{
cin >> x >> y;
if(4*x >= y && y%2 == 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
