#include <iostream>
using namespace std;
int main() {
int a,p;
cin>>a>>p;
if(a>12){
cout<<p;
}
else if(a>=5 && a<=12){
cout<<p/2;
}
else if(a<5){
cout<<"0";
}
}
