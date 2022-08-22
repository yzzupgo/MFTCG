#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,i,a,flag=0;
cin>>x>>y;
for(i=0;i<100;i++)
{
a=x-i;
if((a*4)+(i*2)==y)
flag=1;
}
if(flag>0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
