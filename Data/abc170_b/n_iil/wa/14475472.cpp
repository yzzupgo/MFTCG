#include <iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if(2*a<b && b<=4*a || 2*a<=b && b<4*a){
cout<<"Yes";
}else {
cout<<"No";
}
}
