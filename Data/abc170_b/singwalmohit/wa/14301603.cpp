#include<iostream>
using namespace std;
int main()
{
int x,y,m,n;
cin>>x>>y;
if(y&1)
{
cout<<"NO";
return 0;
}
m=y/2;
n=2*x-y;
n=n/2;
if(m+n==x)
cout<<"YES";
else
cout<<"NO";
}
