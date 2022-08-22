#include<iostream>
using namespace std;
int main()
{
int a=0,b=0,c=0,d=0,e=0;
c=a+b;
d=a-b;
e=a*b;
if(c>d>e||c>e>d)
{
cout<<c<<endl;
return 0;
}
else if(d>c>e||d>e>c)
{
cout<<d<<endl;
return 0;
}
else if(e>c>d||e>d>c)
{
cout<<e<<endl;
return 0;
}
}
