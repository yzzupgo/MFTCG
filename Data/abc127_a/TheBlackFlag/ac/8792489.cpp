#include <iostream>
using namespace std;
int main()
{
int x , y;
cin >> x >> y;
if (x > 12)
{
cout << y;
}
else if (x <= 12 && x >= 6)
{
cout << y / 2;
}
else
{
cout << "0";
}
}
