#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y, t;
cin >> x >> y;
for (int i = 0; i <= x; i++)
{
for (int j = 0; j <= x; j++)
{
t = y - (2 * i);
if(y == 2 * i && x == i)
{
cout << "Yes" << endl;
return 0;
}
else if (t == 4 * j && i + j == x)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
