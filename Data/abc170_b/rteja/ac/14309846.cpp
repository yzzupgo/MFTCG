#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x*4<y || y%2!=0 || x*2>y)
cout<<"No";
else
cout<<"Yes";
return 0;
}
