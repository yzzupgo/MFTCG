#include <iostream>
using namespace std;
int main() {
int a,b,sum,y,x;
cin>>a>>b;
sum=a+b;
y=a-b;
x=a*b;
if(sum>y && sum>x){
cout<<sum;
}
else if(y>sum && y>x){
cout << y;
}
else {
cout<<x;
}
}
