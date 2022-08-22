#include <iostream>
#include<cmath>
using namespace std;
int x,y;
int main()
{
cin >> x >> y;
float mx = y / 2.0;
float mn = y / 4.0;
if (y % 2 != 0 || x > mx || x < mn)
cout << "No";
else cout << "Yes";
}
