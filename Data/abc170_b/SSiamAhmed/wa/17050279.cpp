#include<iostream>
typedef long long ll;
using namespace std;
int main()
{
ll x,y;
cin>>x>>y;
if(x*2<=y && x*4>=y && y%2==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
