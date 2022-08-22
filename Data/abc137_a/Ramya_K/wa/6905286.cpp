#include <iostream>
#include<algorithm>
using namespace std;
int main() {
int a,b,s1,s2,s3;
cin>>a>>b;
s1=a+b;
s2=a-b;
s3=a*b;
cout<<max(max(s1,s3),s3);
return 0;
}
