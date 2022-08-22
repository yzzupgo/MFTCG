#include <iostream>
using namespace std;
int main ()
{
int a , b , c , d , f;
cin >> a >> b ;
c = a*b ;
d = a-b ;
f = a+b ;
if (c>d && c>f)
cout << c ;
else if (d>c && d>f)
cout << d;
else
cout << f ;
return 0 ;
}
