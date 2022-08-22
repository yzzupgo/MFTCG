#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int c,d,e;
c=a+b;
d=a-b;
e=a*b;
if(c>d&&c>e) cout<<c<<endl;
else if(d>c&&d>e) cout<<d<<endl;
else cout<<e<<endl;
}
