#include <bits/stdc++.h>
#define until(symbol,max) for (int symbol = 0; (symbol) < (max); (symbol)++)
using namespace std;
using ll = long long;
int main()
{
int x, y;
cin >> x >> y;
if (y % 2 == 0 && 4 * x - y >= 0 && -2 * x + y >= 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
