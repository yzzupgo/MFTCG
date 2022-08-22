#include <iostream>
using namespace std;
int main() {
int x,y,z;
cin>>x>>y;
if(y/4==x or y/2==x)
cout<<"Yes";
else
{
z= 4*x - y;
if(z/2 > 0 and z%2==0)
cout<<"Yes";
else
cout<<"No";
}
return 0;
}
