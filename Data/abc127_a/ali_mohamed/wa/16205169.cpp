#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a;
cin>>b;
if(b%2==0)
{
if(a>=13)
{
cout<<b;
}
else if (a>=6&&a<=12)
{
cout<<b/2;
}
else if(a<=5)
{
cout<<"for free";
}
}
else
{
cout<<"error";
}
return 0;
}
