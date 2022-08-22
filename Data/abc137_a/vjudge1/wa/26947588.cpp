#include <iostream>
using namespace std;
int main (){
double x,y,a,b,c;
cin>>x>>y;
a=x+y;
b=x-y;
c=x*y;
if(a>b&&b>c || a>c&&c>b)
{
cout<<a;
}
else if(b>a&&a>c||b>c&&c>a)
{
cout<<b;
}
else if (c>a&&c>b)
{
cout<<c;
}
}
