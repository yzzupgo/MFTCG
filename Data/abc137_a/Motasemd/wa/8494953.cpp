#include <iostream>
using namespace std ;
int main()
{
int a,b;
cin>>a>>b;
a,b>-100&&a,b<100;
if((a+b)>(a-b)&&(a+b)>(a*b))
{
cout<< a+b ;
}
else if ((a-b)>(a+b)&&(a-b)>(a*b))
{
cout<<a-b;
}
else if ((a*b)>(a+b)&&(a*b)>(a-b))
{
cout<<a*b ;
}
}
