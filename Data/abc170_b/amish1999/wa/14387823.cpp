#include <iostream>
using namespace std;
int main() {
int n,p;
cin>>n>>p;
if(p<=6*n && p%6==0)
cout<<"Yes\n";
else
cout<<"No\n";
return 0;
}
