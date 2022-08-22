#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,ans=0,z,n,i,j;
cin>>n>>z;
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if((i*2+j*4)==z)
{
cout<<"Yes"<<endl;
return 0;
}
}
}
cout<<"No"<<endl;
}
