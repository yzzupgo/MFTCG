#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(0); cin.tie(0);
int x,y;
cin>>x>>y;
if((y-2*x)/2<=x&&((4*x-y)/2<=x)){
cout<<"YES";
}
else
{
cout<<"NO";
}
}
