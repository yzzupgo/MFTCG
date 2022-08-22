#include <iostream>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
if(Y % 2 == 1)
{
cout << "No" << endl;
return 0;
}
int y = Y/2;
if((2 * X >= y) && (y >= X))
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
