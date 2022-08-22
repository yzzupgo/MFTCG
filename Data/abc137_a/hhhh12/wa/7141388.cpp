#include <iostream>
using namespace std;
int max(int a,int b,int c)
{
if(a>b && a>c)
return a;
else if(b>c && b>a)
return b;
else
return c;
}
int main()
{
int a,b;
cin>>a>>b;
cout<<max(a+b,a-b,a*b);
}
