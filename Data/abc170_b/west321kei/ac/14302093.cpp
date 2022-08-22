#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y % 2 || -1*x + y/2 < 0 || 2*x - y/2 < 0)
{
cout << "No";
return 0;
}
cout << "Yes";
return 0;
}
