#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll x,y,var,varnew;
cin>>x>>y;
if (y%2==1)
{
cout<<"No\n";
}
else
{
var=y/2;
varnew=var/2;
if(x==var||var-x<=varnew)
{
cout<<"Yes\n";
}
else
{
cout<<"No\n";
}
}
return 0;
}
