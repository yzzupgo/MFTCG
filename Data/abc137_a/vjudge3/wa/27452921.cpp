#include<iostream>
using namespace std;
int main()
{
int a,b;
int s,m,d;
cin>>a;
cin>>b;
if((-100<=a)&&(b<=100))
{
s=a+b;
m=a*b;
d=a-b;
if((s>m)&&(s>d))
{
cout<<s;
}
else if((m>s)&&(m>d))
{
cout<<m;
}
else if((d>s)&&(d>m))
{
cout<<d;
}
}
}
