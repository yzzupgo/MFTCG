#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mo=1000000007;
int main()
{
ll t1=1;
while(t1)
{
ll x,y;
cin>>x>>y;
if(y>x*4 || y<x*2 || y%2!=0)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
t1--;
}
return 0;
}
