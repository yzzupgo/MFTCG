#include <iostream>
using namespace std;
int x,y;
int main()
{
cin >> x >> y;
int mx = y / 2;
int mn = y / 4;
if (y % 2 != 0 || x > mx || x < mn)
cout << "No";
else cout << "Yes";
}
