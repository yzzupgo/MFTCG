#include <iostream>
using namespace std;
int main() {
int n,p;
cin>>n>>p; bool res=false;
for(int i=0;i<n+1;i++)
if((i*2+(n-i)*4)==p) res = true;
(res) ? cout<<"Yes" : cout<<"No";
return 0;
}
