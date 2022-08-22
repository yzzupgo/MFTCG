#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(0); cin.tie(0); int x,y;
cin>>x>>y;
if((4*x-y)/2>=0&&(4*x-y)%2==0&&(y-2*x)/2>=0&&(y-2*x)%2==0&&(y>x))
{
cout<<"Yes"<<"\n";
}
else
{
cout<<"No"<<"\n";
}
}
