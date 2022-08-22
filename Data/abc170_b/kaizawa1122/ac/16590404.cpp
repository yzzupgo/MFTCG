#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y,sum = 0;
cin >> x >> y;
for (int i = 0; i <= x; i++)
{
for (int j = 0; j <= x; j++)
{
sum = 2 * i + 4 * j;
if (sum == y && i + j == x)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
