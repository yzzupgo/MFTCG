#include <bits/stdc++.h>
using namespace std;
int main()
{
double x, y;
double a, b;
cin >> x >> y;
b = (y - 2 * x) / 2;
a = (4 * x - y) / 2;
if(a-int(a)>0 || a<0 || b-int(b)>0 || b <0)
{
cout << "No\n";
}
else
{
cout << "yes\n";
}
}
