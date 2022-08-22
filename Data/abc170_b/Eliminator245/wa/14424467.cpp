#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
ll x,y,ma,mi;
cin>>x>>y;
if (y%2==1)
{
cout<<"No\n";
}
else
{
ma=y/2;
mi=y/4;
if (x<=ma&&x>=mi)
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
