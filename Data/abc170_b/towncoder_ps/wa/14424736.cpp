#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if((y%2==0)&&((2*x)-(y/2)>=0))
cout<<"Yes";
else
cout<<"No";
return 0;
}
