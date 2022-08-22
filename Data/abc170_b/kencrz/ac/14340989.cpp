#include<bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X;
cin >> Y;
int a = (4 * X - Y) / 2;
int b = (Y - 2 * X) / 2;
if ( (a < 0) || (b < 0) || (2*a+4*b != Y))
{
cout << "No" << endl;
}
else
{
cout << "Yes" << endl;
}
return 0;
}
