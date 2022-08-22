#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
ll n,i,j,k,x,y,cr,turt;
cin>>x>>y;
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
