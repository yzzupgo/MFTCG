#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y, c;
cin >> x >> y;
for (int i = 0; i < x; i++)
{
c = y - (4 * i);
if (c % 2 == 0 && (c / 2) + i == x)
{
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
