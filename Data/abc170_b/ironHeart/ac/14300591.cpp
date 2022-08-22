#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y<2*x || y>4*x)
{
cout<<"No"<<endl;
}
else
{
if(y%2!=0)
{
cout<<"No"<<endl;
}
else
{
cout<<"Yes"<<endl;
}
}
return 0;
}
