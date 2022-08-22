#include <iostream>
using namespace std;
int main() {
int a,b,x,y;
cin>>a>>b;
x=2*a-b/2;
y=-a+b/2;
if(x>=0 && y>=0){
cout<<"Yes";
}else {
cout<<"No";
}
}
