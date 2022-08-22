#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2==0)
{
if(y/x<=4&&y/x>=2)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
