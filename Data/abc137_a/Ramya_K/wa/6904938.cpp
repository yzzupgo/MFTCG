#include <iostream>
using namespace std;
int main() {
int a,b,s1,s2,s3;
cin>>a>>b;
if(-100<=a && b<=100)
{
s1=a+b;
s2=a-b;
s3=a*b;
if(s1>s2 && s1>s3)
cout<<s1;
else if(s2>s1 && s2>s3)
cout<<s2;
else
cout<<s3;}
return 0;
}
