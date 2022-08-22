#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
float a=y/2.0;
if(floor(a)==ceil(a))
cout<<"Yes";
else
cout<<"No";
return 0;
}
