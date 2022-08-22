#include <iostream>
using namespace std;
int main ()
{
int a , b , s , m , l ;
cin>> a>>b ;
s = a * b ;
m = a + b ;
l = a - b ;
if(s > m && s > l)
{
cout <<s ;
}
if(l > m && l > s)
{
cout <<l ;
}
if(m > s && m > l)
{
cout <<m ;
}
return 0 ;
}
