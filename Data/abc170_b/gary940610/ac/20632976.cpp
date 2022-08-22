#include <iostream>
using namespace std;
signed main()
{
int x,y;
cin>>x>>y;
int b=(y-2*x)/2;
int a=x-b;
if(2*a+4*b==y&&a>=0&&b>=0&&a<=x&&b<=x) cout<<"Yes";
else cout<<"No";
}
