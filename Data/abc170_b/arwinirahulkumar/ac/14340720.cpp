#include <iostream>
#include<cmath>
using namespace std;
void find1(int X,int Y)
{
if(X<0 || Y<0)
cout<<"No";
else
{
double a,b;
b = ((4*X)-Y);
a = b/2;
if(a<0 || X-a<0 || !(abs(a-(int)a)==0) )
cout<<"No";
else
cout<<"Yes";
}
}
int main()
{
int X,Y;
cin>>X>>Y;
find1(X,Y);
return 0;
}
