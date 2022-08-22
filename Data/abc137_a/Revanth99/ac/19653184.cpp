#include <iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
cin>>a>>b;
c=a+b;
d=a-b;
e=a*b;
if(c>=d && c>=e)
cout<<c;
else if(d>=e && d>=c) cout<<d;
else cout<<e;
return 0;
}
