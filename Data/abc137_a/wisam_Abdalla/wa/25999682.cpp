#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int res1=a+b;
int res2=a*b;
int res3=a-b;
if(res1>res2&&res1>res3)
{
cout<<res1;
}
else if(res2>res1&&res2>res3)
{
cout<<res2;
}
else if(res3>res2&&res3>res1)
{
cout<<res3;
}
return 0;
}
