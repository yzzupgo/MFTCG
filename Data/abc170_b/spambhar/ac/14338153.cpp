#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,m;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No";
}
else
{
m=x*2 - (y/2);
if(m>=0 && m<=x)
{
cout<<"Yes";
}
else
cout<<"No";
}
}
