#include<bits/stdc++.h>
using namespace std;
int main()
{
int X, Y;
cin >> X;
cin >> Y;
double a = (double)(4 * X - Y) / 2;
double b = (double)(Y - 2 * X) / 2;
if ( (a < 0) || (b < 0) || (a == 0 && b == 0))
{
cout << "No" << endl;
}
else
{
cout << "Yes" << endl;
}
return 0;
}
