#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD (ll) (1e9+7)
int main()
{
ll x,y;
cin>>x>>y;
ll max_legs = x*4;
ll fl = 0;
for(int i=0;i<=x;i++)
{
ll no_crane = i;
ll no_turtle = x-i;
if(no_crane*2 + no_turtle*4 == y)
{
fl = 1;
break;
}
}
if(fl)
{
cout<<"Yes\n";
}
else
{
cout<<"No\n";
}
}
