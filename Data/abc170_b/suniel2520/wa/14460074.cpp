#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,c,t,flag=0,i;
cin >> x >>y;
c=y;t=y;
for(i=0;i<10;i++)
{
if(c>=2)
c=c/2;
if(t>=4)
t=t/4;
if(c+t==x)
{
flag=1;
break;
}
}
if(flag==1)
cout<<"Yes";
else
cout <<"No";
}
