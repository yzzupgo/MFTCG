#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y-2*x>=0 && (y-2*x)%2==0 && (4*x-y)>=0 && (4*x-y)%2==0)
{
cout<<"Yes"<<"\n";
}
else
{
cout<<"No"<<"\n";
}
return 0;
}
