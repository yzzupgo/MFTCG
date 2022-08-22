#include <iostream>
using namespace std;
int main() {
int n;
int legs;
cin>>n>>legs;
if(legs%2==0){
if(n*4>=legs){
cout<<"yes"<<endl;
}else{
cout<<"no"<<endl;
}
}else{
cout<<"no"<<endl;
}
}
