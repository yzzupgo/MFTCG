#include<bits/stdc++.h>
using namespace std;
int x,y;
int main()
{
cin>>x>>y;
for(int i=0;i<=x;i++)
{
for(int j=0;j<=x-i;j++)
{
if(i*4+j*2==y && i+j==x)
{
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
return 0;
}
