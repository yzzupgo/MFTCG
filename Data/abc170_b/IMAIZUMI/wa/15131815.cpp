#include<iostream>
#include<string>
using namespace std;
int main()
{
int X = 0, Y = 0;
cin >> X >> Y;
if (Y - 2 * X % 1 != 0||4*X>Y)
{
cout << "No";
}
else
{
cout << "Yes";
}
}
