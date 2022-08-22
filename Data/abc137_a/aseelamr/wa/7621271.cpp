#include <iostream>
using namespace std;
int main()
{
int a , b ;
int s , d, f ;
cin >> a>> b;
s = a+b ;
d= a-b ;
f =a*b ;
if (s >d &&s>f)
cout << s ;
else if (d>s && d>f)
cout << d;
else if (f>s &&f>d )
cout << f;
return 0;
}
