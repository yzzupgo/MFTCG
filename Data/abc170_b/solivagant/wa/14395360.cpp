#include<iostream>
using namespace std;
int main()
{
int x,y,j;
string ans="No";
cin>>x;
cin>>y;
if(x<y)
{
for(int i=0;i<x;i++)
{
j=x-i;
if(((i*2)+(j*4))==y)
{
ans="Yes";
break;
}
}
}
cout<<ans;
}
