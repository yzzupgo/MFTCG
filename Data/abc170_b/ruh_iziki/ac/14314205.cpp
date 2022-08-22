#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int i,j,k;
cin>>i>>j;
double a,b=i,c=j;
a=4*b-c;
a=a/2;
k=floor(a);
if(a<0)
cout<<"No";
else if(a==k)
{
if(k>i)
cout<<"No";
else
{
if((2*k+(i-k)*4)==j)
cout<<"Yes";
else
cout<<"No";
}
}
else
cout<<"No";
return 0;
}
