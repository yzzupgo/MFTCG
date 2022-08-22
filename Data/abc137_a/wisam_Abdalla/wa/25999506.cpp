#include <iostream>
using namespace std;
int main()
{
int a,b,res1,res2,res3;
cin>>a>>b;
if(-100<=a,b<=100)
{
res1=a+b;
res2=a-b;
res3=a*b;
if(res1>res2&&res1>res3)
{
cout<<res1;
}
else if(res2>res1&&res2>res3)
{
cout<<res2;
}
else if(res3>res1&&res3>res2)
{
cout<<res3;
}
}
return 0;
}
