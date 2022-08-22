#include <iostream>
#include <string>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
string A = "Yes";
if (Y % 2 != 0)
{
A = "No";
}
if (Y > X * 4)
{
A = "No";
}
if (X >= 51)
{
A = "No";
}
cout << A << endl;
}
