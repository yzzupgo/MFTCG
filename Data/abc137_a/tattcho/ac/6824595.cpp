#include<iostream>
using namespace std;
int main ()
{
int a,b;
int x=0,y=0,z=0;
int max=-100;
cin>>a>>b;
x = a+b;
y = a-b;
z = a*b;
if(max<x)
{
max=x;
}
if(max<y)
{
max=y;
}
if(max<z)
{
max=z;
}
cout<<max;
cout<<endl;
}
