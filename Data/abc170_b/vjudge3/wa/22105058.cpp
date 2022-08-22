#include <bits/stdc++.h>
using namespace std;
int main()
{
int a, b, t, d, s;
cin >> a >> b;
if(2*a >= b - 1)
cout << "No";
else
if (b % 2 == 1)
cout << "No";
else
{
t = b - 2 * a;
s = t / 2;
d = (b - s * 4)/2;
if(d < 0) cout << "No";
else
{
if((s * 4 + (a - s) * 2 == b))
cout << "bes";
else
cout << "No";
}
}
}
