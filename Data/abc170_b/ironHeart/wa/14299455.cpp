#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y<2*x || y>4*x)
{
cout<<"NO"<<endl;
}
else
{
if(y%2!=0)
{
cout<<"NO"<<endl;
}
else
{
cout<<"YES"<<endl;
}
}
return 0;
}
