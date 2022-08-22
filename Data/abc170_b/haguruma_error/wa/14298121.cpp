#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;
int main()
{
ll x, y;
cin >> x >> y;
ll a = (4*x - y) / 2;
ll b = (y - 2*x) / 2;
if(a >= 0 && b >= 0)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
