#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int x,y; cin>>x>>y;
int c=0,t=0;
if(y==1)
{
cout<<"No\n";
return 0;
}
if(x==1 && y==2)
{
cout<<"Yes\n";
return 0;
}
else if(x==1 && y==4)
{
cout<<"Yes\n";
return 0;
}
for(int i=0;i<=x;i++)
{
c=2*i;
for(int j=0;j<=x;j++)
{
t=4*j;
if((c+t)==y)
{
cout<<"Yes\n";
return 0;
}
}
}
cout<<"No\n";
return 0;
}
