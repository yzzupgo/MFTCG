#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y, t;
cin >> x >> y;
for (int i = 1; i <= x; i++)
{
t = y - (2 * i);
if(y == 2 * i && x == i)
{
cout << "Yes" << endl;
return 0;
}
else if (t % 4 == 0 && (t / 4) + i == x)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
