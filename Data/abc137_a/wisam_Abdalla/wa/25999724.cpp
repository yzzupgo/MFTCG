#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int s1=a+b;
int s2=a*b;
int s3=a-b;
if(s1>s2&&s1>s3)
{
cout<<s1;
}
else if(s2>s1&&s2>s3)
{
cout<<s2;
}
else if(s3>s2&&s3>s1)
{
cout<<s3;
}
}
