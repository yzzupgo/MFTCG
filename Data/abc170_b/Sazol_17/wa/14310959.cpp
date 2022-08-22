#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll i,x,y,cr,turt;
cin>>x>>y;
if(y/2==x||y/4==x)
return cout<<"Yes"<<endl,0;
for(i=1;i<=y/4;i++)
{
cr=i*2;
turt=y-cr;
if(turt%4==0){
if(i+(turt/4)==x)
return cout<<"Yes"<<endl,0;
}
}
cout<<"No"<<endl;
return 0;
}
