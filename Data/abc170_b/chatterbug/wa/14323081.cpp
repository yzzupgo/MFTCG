#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(0); cin.tie(0);
int x,y;
cin>>x>>y;
if((4*x-y)/2>=0&&(4*x-y)%2==0)
{
cout<<"YES"<<"\n";
}
else
{
cout<<"NO"<<"\n";
}
}
