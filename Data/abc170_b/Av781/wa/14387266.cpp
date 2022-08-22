#include<iostream>
using namespace std;
int main()
{
int x,y,i,a=0,s=0;
cin>>x>>y;
for(i=0;i<=x;i++)
{
s=x-i;
a=i*2+s*4;
if(a==y)
{
cout<<"YES"<<endl;
return 0;
}
}
cout<<"NO"<<endl;
return 0;
}
