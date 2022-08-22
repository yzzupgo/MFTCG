#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main()
{
int x,y;
string ans;
cin >> x >> y;
ans="No";
if (y % 2 ==0 && y >= x*2)
{
if ((4*x - y)/2 >= 0)
ans="Yes";
}
cout << ans << endl;
}
