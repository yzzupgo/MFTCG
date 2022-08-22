#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ll x,y,i,c=0,t=0,s=1,p,q,j,k;
cin>>x>>y;
c=x*2;
t=x*4;
if(y<c||y>t)
{
s=1;
}
else if(y<=t&&y>=c)
{
for(j=0; j<x; j++)
{
for(k=j+1; k<=x; k++)
{
if(((j*2+k*4)==y)&&(j+k)==x)
{
s=0;
}
}
}
for(j=0; j<x; j++)
{
for(k=j+1; k<=x; k++)
{
if(((k*2+j*4)==y)&&(j+k)==x)
{
s=0;
}
}
}
}
if(s==1)
{
cout<<"No"<<endl;
}
else
{
cout<<"Yes"<<endl;
}
return 0;
}
