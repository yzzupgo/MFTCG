#include <iostream>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
int a=(4*x-y)/2;
int b=(y-2*x)/2;
if (a+b==x&&a>=0&&b>=0)
{
cout<<"Yes"<<endl;
}
else
{
cout<<"No"<<endl;
}
return 0;
}
