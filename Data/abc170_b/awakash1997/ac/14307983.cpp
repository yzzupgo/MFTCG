#include <iostream>
using namespace std;
int main() {
int n,t;
cin>>n>>t;
if(4*n<t || t%2==1 || t<2*n)cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}
