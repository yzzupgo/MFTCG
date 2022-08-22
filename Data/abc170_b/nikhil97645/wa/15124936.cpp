#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD (ll) (1e9+7)
int main()
{
ll x,y;
cin>>x>>y;
ll max_legs = x*4;
if(y%2==1 || y>max_legs)
{
cout<<"No\n";
}
else
{
cout<<"Yes\n";
}
}
