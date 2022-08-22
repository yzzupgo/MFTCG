#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
int x, y;
cin >> x;
cin >> y;
if (y%2 != 0)
{
cout << "No";
return 0;
}
else
{
if ( (4*x - y) >= 0 && ((y/2) - x) >= 0)
{
cout << "Yes";
return 0;
}
cout <<"No"; return 0;
}
}
