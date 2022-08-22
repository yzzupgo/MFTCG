#include <iostream>
using namespace std;
signed main()
{
int x,y;
cin>>x>>y;
int d=y-2*x;
if(d%2==0&&d<=x&&d>=0) cout<<"Yes";
else cout<<"No";
}
