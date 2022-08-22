#include <iostream>
using namespace std;
const int INF=0x3f3f3f3f;
int n,m;
int main()
{
int i,j,k,ans=0;
cin>>n>>m;
int x,y;
x=n*2;
if(x>m)
cout<<"No"<<endl;
else
{
y=(m-x)/2;
x=n-y;
if(x*2+y*4!=m)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
return 0;
}
