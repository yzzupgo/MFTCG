#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
ll x,y;
cin >> x >> y;
if((y%2) || y > 4*x || y < 2*x)
cout << "No" << endl;
else
cout << "Yes" << endl;
return 0;
}
