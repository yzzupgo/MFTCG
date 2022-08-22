#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
t=1;
while(t--)
{
ll x,y;
cin>>x>>y;
if(y-2*x<0||4*x<y)
cout<<"No";
else
{
if((y-2*x)%2==0)
{
ll m=(y-2*x)/2;
if((y-4*m)%2==0&&(y-4*m)/2+(y-2*x)/2==x)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
}
return 0;
}
