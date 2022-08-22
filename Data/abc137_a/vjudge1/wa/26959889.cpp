#include <iostream>
using namespace std;
int main()
{
int a , b , x , y , z ;
cin >> a >> b ;
x = a + b ;
y = a - b ;
z = a * b ;
if (x>y && x>z)
cout << x ;
else if (y >x && y > z)
cout << y ;
else if (z > x && z > y)
cout << z ;
else if (x=y && x>z)
cout << x ;
else if (x=z && x>y)
cout << x ;
else if (y=x &&y>z)
cout << y ;
else if (y=z && y>x)
cout << y ;
else if (z=x && z>y)
cout << z ;
else if (z=y && z>x)
cout << z ;
else
cout << x ;
}
