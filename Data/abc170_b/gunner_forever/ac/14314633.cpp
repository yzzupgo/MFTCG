#include <iostream>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int x,y;
cin>>x>>y;
if(y%2==0)
{
y=y/2;
int a=y-x;
if(a>=0 && a<=x)
cout<<"Yes";
else
cout<<"No";
}
else
cout<<"No";
}
