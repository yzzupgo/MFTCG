#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No";
}
else
{
x=x*4;
if(y<=x)
cout<<"Yes";
else
cout<<"No";
}
}
