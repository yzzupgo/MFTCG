#include <iostream>
using namespace std;
int main()
{
int i,j,k;
cin>>i>>j;
double a,b=i,c=j;
k=4*i-j;
k=(int)(k/2);
a=4*b-c;
a=a/2;
if(k<0)
cout<<"No";
else if(a==k)
{
cout<<"Yes";
}
else
cout<<"No";
return 0;
}
