#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int leg1=x*4;
int leg2=x*2;
if(y==leg1||y==leg2)
{
cout<<"Yes\n";
}
else
{
for(int i=1;i<=x;i++)
{
if((i*2+(x-i)*4)==y)
{
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
}
}
