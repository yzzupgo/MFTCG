#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
for (int i = x; i > 0 ; i--)
{
for (int j = 1; j <= (x - i); j++)
{
if ((i*2 + j*4) == y)
{
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
