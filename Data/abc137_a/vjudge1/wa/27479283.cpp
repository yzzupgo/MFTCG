#include <iostream>
using namespace std;
int main()
{
int A,B,x,y,z;
cin>> A>>B;
if (A>=-100 && B<=100) {
x=A+B;
y=A-B;
z=A*B;
}
if (x>y && x>z) {
cout<<x;
}
else if (y>x && y>z) {
cout<<y;
}
else if (z>x && z>y) {
cout<<z;
}
return 0;
}
