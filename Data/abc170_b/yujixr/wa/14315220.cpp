#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y % 2 != 0)
{
cout << "No" << endl;
return 0;
}
cout << (((y / 2 - x) <= x) ? "Yes" : "No") << endl;
}
