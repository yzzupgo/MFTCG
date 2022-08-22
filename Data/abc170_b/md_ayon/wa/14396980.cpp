#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,k=0,flag=0;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
k=x-i;
if((2*i)+(4*k)==y)
{
flag=1;
break;
}
}
if(flag==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
