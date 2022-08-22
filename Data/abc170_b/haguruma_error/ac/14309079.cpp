#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;
int main()
{
ll x, y;
cin >> x >> y;
ll a = 4*x - y;
ll b = y - 2*x;
if(a >= 0 && a % 2 == 0 && b >= 0 && b % 2 == 0)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
return 0;
}
