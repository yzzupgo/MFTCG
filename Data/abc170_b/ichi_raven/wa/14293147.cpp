#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if(y > x * 4 || y % 2 != 0)
{
cout << "No\n";
}
else
{
cout << "Yes\n";
}
return 0;
}
