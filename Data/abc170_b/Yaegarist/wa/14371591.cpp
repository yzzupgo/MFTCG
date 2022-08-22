#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if( (y&1 == 0) && y>=2*x && y<=4*x)
{
cout<<"Yes"<<'\n';
}
else
{
cout<<"No"<<'\n';
}
}
