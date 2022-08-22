#include<iostream>
using namespace std;
int main()
{
int a=0,b=0,c=0,d=0,e=0;
cin>>a>>b;
c=a+b;
d=a-b;
e=a*b;
if(c>d&&d>e||c>e&&c>d)
{
cout<<c<<endl;
return 0;
}
else if(d>c&&c>e||d>e&&e>c)
{
cout<<d<<endl;
return 0;
}
else if(e>c&&c>d||e>d&&d>c)
{
cout<<e<<endl;
return 0;
}
}
