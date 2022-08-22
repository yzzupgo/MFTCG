#include <iostream>
using namespace std;
int main()
{
int x,y;
float m;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No";
exit(0);
}
m=(float)y/x;
if(m>=2&&m<=4)
cout<<"Yes";
else
cout<<"No";
}
