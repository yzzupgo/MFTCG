#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main(void){
int a,b,kame,asi;
cin>>a>>b;
kame=(b-2*a)/2;
asi=kame*4+(a-kame)*2;
if(a==1&&b==1){
cout<<"Yes"<<endl;
}else if(b%2!=0||kame<0){
cout<<"No"<<endl;
}else if(a-kame<0){
cout<<"No"<<endl;
}else if(b==asi){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
