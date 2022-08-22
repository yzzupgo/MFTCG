#include <iostream>
using namespace std;
int main() {
int n;
int legs;
cin>>n>>legs;
if(legs%2==0){
if(n*4>=legs and n*2<=legs){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}else{
cout<<"No"<<endl;
}
}
