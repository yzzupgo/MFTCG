#include<bits/stdc++.h>
using namespace std;
int main()
{
int y,x,ans;
cin>>x>>y;
int i,j,k,a=0;
for(i=0;i<=x;i++)
{
if((2*i)+4*(x-i) == y)
{
a=1;
break;
}
}
if(a==1)
cout<<"Yes";
else
cout<<"No";
}
