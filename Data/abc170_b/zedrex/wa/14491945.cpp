#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y % 2 == 0 and y >= 2 * x and y <= 4 * x)
cout << "YES" << endl;
else
cout << "NO" << endl;
return 0;
}
