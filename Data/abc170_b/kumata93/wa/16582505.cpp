#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
for (int i = x + 1; i > 0 ; i--)
{
for (int j = 0; j <= (x - i); j++)
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
