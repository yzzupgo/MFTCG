#include<iostream>
using namespace std;
int main(){
int a,b,c,d,f;
cin>>a>>b;
a*b;
a-b;
a+b;
if (a*b>a-b && a*b>a+b ){
cout<<a*b<<endl;
}
else if (a-b>a*b && a-b>a+b){
cout<<a-b<<endl;
}
else if (a+b>a*b && a+b>a-b){
cout<<a+b<<endl;
}
return 0;
}
