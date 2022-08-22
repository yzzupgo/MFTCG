#include <iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
a>=-100;
b<=100;
int s,p,d;
s=a+b;
p=a*b;
d=a-b;
if(s>p&&s>d)
cout<<s;
else if (p>s&&p>d)
cout<<p;
else if (d>p&&d>s)
cout<<d;
return 0;
}
