#include<bits/stdc++.h>
using namespace std;
int main()
{
int x, y, i;
cin >> x >> y;
int legs = 0, cl = 0, tl = 0, c = 0, t = 0;
for (i=0; i<=x; i++)
{
c = i;
t = x-i;
cl = 2*c;
tl = 4*t;
legs = cl+tl;
if (legs == y)
{
cout << "Yes" << "\n";
return 0;
}
}
cout << "No" << "\n";
}
