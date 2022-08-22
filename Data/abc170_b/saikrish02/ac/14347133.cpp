#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int count=0;
for(int i=0;i<=x;i++)
{
for(int j=0;j<=x;j++)
{
if((2*i)+(4*j)==y && i+j==x )
{
count=-1;
break;
}
}
if(count==-1)
{
break;
}
}
if(count==-1)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
}
