#include <iostream>
using namespace std;
int main(void){
int n;
cin>>n;
if(n<10){
cout<<n<<endl;
}
if(n>10 && n<100){
cout<<9<<endl;
}
if(n>100 && n<1000){
cout<<10+n-100<<endl;
}
if(n>1000 && n<10000){
cout<<909<<endl;
}
if(n>10000 && n<100000){
cout<<n-9999+909<<endl;
}
if(n==100000){
cout<<90909<<endl;
}
}
