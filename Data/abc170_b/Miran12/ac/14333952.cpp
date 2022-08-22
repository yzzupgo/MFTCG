#include<iostream>
using namespace std;
int main()
{
int x,y,i,c,t;
bool f=false;
cin>>x>>y;
for(i=0;i<=x;i++)
{
c=i*2;
t=(x-i)*4;
if(c+t==y)
{
f=true;
break;
}
}
if(f)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
