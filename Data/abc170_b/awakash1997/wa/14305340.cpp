#include <iostream>
using namespace std;
int main() {
int n,t;
cin>>n>>t;
if(4*n<t || t%2==1 || t<2*n)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;
}
