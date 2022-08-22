#include <iostream>
#include<string>
using namespace std;
int x,y;
bool f = false;
int main()
{
cin >> x >> y;
if (y!=1&&y % 2 != 0)
f = true;
int mx = y / 2;
int mn = y / 4;
if (f || x > mx || x < mn)
cout << "No";
else cout << "Yes";
}
