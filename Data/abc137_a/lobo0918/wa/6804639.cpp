#include <iostream>
#include <string>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
c=a+b;
if(a-b>c){
c=a-b;
}else if(a*b>c){
c=a*b;
}
cout<<c<<endl;
}
