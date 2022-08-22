#include<iostream>
#include<string>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
if (Y - 2 * X % 1 != 0)
{
cout << "Yes";
}
else {
cout << "No";
}
}
