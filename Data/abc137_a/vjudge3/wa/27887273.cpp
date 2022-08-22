#include <iostream>
using namespace std;
int main ()
{
int a,b,ans1,ans2,ans3;
cin>>a;
cin>>b;
ans1=a+b;
ans2=a-b;
ans3=a*b;
if (ans1>ans2 & ans1>ans3 )
cout<<ans1;
if (ans2>ans1 & ans2>ans3)
cout<<ans2;
if (ans3>ans1 & ans3>ans2)
cout<<ans3;
return 0;
}
