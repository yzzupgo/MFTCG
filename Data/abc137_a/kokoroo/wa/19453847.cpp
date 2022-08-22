#include <iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int t=0,u=0,s=0;
t=a+b;
u=a-b;
s=a*b;
if(t>u&&t>s){
cout<<t<<endl;
}
else if(u>t&&u>s){
cout<<u<<endl;
}
else cout<<s<<endl;
return 0;
}
