#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,d,i,j,k;
cin>>x>>y;
d=y/x;
if(y%2!=0)
cout<<"No"<<endl;
else
{
if(y>=(2*x)&&y<=(4*x))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
}
