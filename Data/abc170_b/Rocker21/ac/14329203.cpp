#include<bits/stdc++.h>
using namespace std;
int main()
{
int X,Y,a,b;
cin>>X>>Y;
if(Y%2==1)
{
cout<<"No";
exit(0);
}
a = (4*X - Y)/2 ;
b = X-a;
if(a>=1 && b==0)
{ cout<<"Yes";
exit(0);
}
if (a==0 && b>=1)
{
cout<<"Yes";
exit(0);
}
if(a>=1 && b>=1)
cout<<"Yes";
else
cout<<"No";
}
