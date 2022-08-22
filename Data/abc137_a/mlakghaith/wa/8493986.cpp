#include<iostream>
using namespace std;
int main(){
int a,b,c,d,f;
cin>>a>>b;
c=a*b;
cout<<c;
cin>>a>>b;
d=a-b;
cout<<d;
cin>>a>>b;
f=a+b;
cout<<f;
if (c>d && c>f){
cout<<c<<endl;
}
else if (d>c && d>f){
cout<<d<<endl;
}
else if (f>c && f>d){
cout<<f<<endl;
}
return 0;
}
