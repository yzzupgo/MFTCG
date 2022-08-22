#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin>> x >> y;
if ((y % 2 == 0) && (y / 2 - x >= 0) && (2*x - y / 2 >= 0))
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
