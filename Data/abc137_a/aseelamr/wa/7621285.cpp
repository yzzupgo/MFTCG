#include <iostream>
using namespace std;
int main()
{
int A, B ;
int s , d, f ;
cin >> A>> B;
s = A+B ;
d= A-B ;
f =A*B ;
if (s >d &&s>f)
cout << s ;
if (d>s && d>f)
cout << d;
if (f>s &&f>d )
cout << f;
return 0;
}
