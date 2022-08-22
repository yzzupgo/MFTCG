#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll x,y;
string ans="NO";
cin>>x>>y;
if(y%2!=0)
cout<<ans<<endl;
else
{
ll y1=(y/2-x);
ll x1=(2*x-(y/2));
if(y1>=0 and x1>=0)
{
ans="Yes";
}
cout<<ans<<endl;
}
return 0;
}
