#include<iostream>
using namespace std;
int main ()
{
int a,b;
int x,y,z;
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
max=z;
}
if(max<z)
{
max=z;
}
cout<<max;
cout<<endl;
}
