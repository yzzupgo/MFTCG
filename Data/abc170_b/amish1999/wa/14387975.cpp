#include <iostream>
using namespace std;
int main() {
int n,p;
cin>>n>>p; bool res=true;
for(int i=1;i<n;i++)
if((i*2+(n-i)*4)==p) res = true;
(res) ? cout<<"Yes" : cout<<"No";
return 0;
}
