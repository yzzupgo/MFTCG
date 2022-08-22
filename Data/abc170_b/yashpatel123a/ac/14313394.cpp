#include <iostream>
using namespace std;
#define ll long long int
int main() {
ll x,y;
cin>>x>>y;
if(y%2!=0)
{
cout<<"No";
return 0;
}
if(y>=x*2 && y<=x*4)
{
cout<<"Yes";
return 0;
}
cout<<"No";
return 0;
}
