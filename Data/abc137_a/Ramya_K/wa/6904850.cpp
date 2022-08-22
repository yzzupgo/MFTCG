#include <iostream>
using namespace std;
int main() {
int a,b,s1,s2,s3;
cin>>a>>b;
s1=a+b;
s2=a-b;
s3=a*b;
if(s1>s2 && s1>s3)
cout<<s1;
else if(s2>s1 && s2>s3)
cout<<s2;
else
cout<<s3;
return 0;
}
