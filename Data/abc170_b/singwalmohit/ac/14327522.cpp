#include<iostream>
using namespace std;
int main()
{
int x,y,m,n;
cin>>x>>y;
if(y%2!=0 || y-4*x>0 || 2*x-y>0)
{
cout<<"No";
return 0;
}
m=(4*x-y)/2;
n=x-m;
if((2*m+4*n)==y)
cout<<"Yes";
else
cout<<"No";
}
