#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
c=a-b;
if(c<a*b){
c=a*b;
}
else if (c<a+b){
c=a+b;
}
cout<<c;
}
