#include <iostream>
using namespace std;
int main()
{
int A,B,z,x,y;
cin>> A>>B;
if (A>=-100 && B<=100) {
x=A+B;
y=A-B;
z=A*B;
}
if (x>y )
{
if(x>z)
cout<<x<<endl;
else
cout<<z<<endl;
}
else {
if(y>z)
cout<<y<<endl;
else
cout<<z<<endl;
}
return 0;
}
