#include <iostream>
using namespace std;
int main()
{
int a,b;
cin >>a>>b;
if(a>=0 && b>=0)
{
if(a+b>=a*b)
cout << a+b;
else
cout <<a*b;
}
else if(a>=0 && b<0)
cout << a-b;
else if(a<=0 && b>=0)
{
if(a+b >= a*b)
cout << a+b;
else
cout << a*b;
}
else if(a<=0 && b<=0)
{
if(a+b >= a*b)
cout << a+b;
else
cout <<a*b;
}
}
