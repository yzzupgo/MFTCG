#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if((b-2*a)%2!=0||(b-2*a)/2>a){
cout<<"No";
}
else{
cout<<"Yes";
}
}
