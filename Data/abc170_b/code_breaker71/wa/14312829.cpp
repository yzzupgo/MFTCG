#include<iostream>
using namespace std;
int main()
{
int a,b,x,y;
cin>>x>>y;
if(y%2!=0)
cout<<"No";
else
{
b=((y-2*x)/2);
a=x-b;
if(a<0)
cout<<"No";
else
cout<<"Yes";
}
}
