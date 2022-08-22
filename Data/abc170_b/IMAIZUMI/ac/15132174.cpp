#include<iostream>
using namespace std;
int main()
{
int X = 0, Y = 0;
cin >> X >> Y;
if (Y%2==1||4*X<Y||2*X>Y)
{
cout << "No";
}
else
{
cout << "Yes";
}
}
