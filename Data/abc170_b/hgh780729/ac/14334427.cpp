#include <iostream>
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int main()
{
cin>>n>>m;
int x,y;
x=n*2;
if(x>m)
cout<<"No"<<endl;
else
{
y=(m-x)/2;
x=n-y;
if(x*2+y*4!=m || x<0 || y<0)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
return 0;
}
