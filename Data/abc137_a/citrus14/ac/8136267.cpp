#include<iostream>
using namespace std;
int main()
{
int a=0,b=0,c=0,d=0,e=0;
cin>>a>>b;
c=a+b;
d=a-b;
e=a*b;
if(c>d&&c>e)
{
cout<<c<<endl;
return 0;
}
else if(d>c&&d>e)
{
cout<<d<<endl;
return 0;
}
else if(e>c&&e>d)
{
cout<<e<<endl;
return 0;
}
else if(c==d&&d==e)
{
cout<<c<<endl;
return 0;
}
else if(c==d||c==e||d==e)
{
if(c==d||c==e)
{
cout<<c<<endl;
return 0;
}
else
{
cout<<d<<endl;
return 0;
}
}
}
