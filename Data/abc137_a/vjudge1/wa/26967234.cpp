#include <iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int x1= a+b;
int x2= a-b;
int x3= a*b;
if (x1>x2&&x1>x3)
cout<<x1;
else if (x2>x1&&x2>x3)
cout<<x2;
else
cout<<x3;
return 0;
}
