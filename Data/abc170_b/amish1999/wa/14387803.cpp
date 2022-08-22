#include <iostream>
using namespace std;
int main() {
int n,p;
cin>>n>>p;
if(p<=4*n && (p%6==0 || p%2==0 || p%4==0))
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
