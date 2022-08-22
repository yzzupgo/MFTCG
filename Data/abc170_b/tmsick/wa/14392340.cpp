#include <iostream>
using namespace std;
int main()
{
int X, Y;
double c, t;
cin >> X >> Y;
c = (4 * X - Y) / 2;
t = (Y - 2 * X) / 2;
if (c >= 0 && t >= 0 && static_cast<int>(c) == c && static_cast<int>(t) == t)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
}
