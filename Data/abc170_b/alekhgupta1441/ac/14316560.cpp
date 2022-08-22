#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
ll x,y;
cin >> x >> y;
string ans;
if(y%2)
ans="No";
else
{
if(x>y/2)
ans="No";
else if(x<y/4 || (x==y/4 && y%4))
ans="No";
else
ans="Yes";
}
cout << ans << "\n";
}
