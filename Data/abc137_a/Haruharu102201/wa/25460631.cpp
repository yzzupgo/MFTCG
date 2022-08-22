#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,e;
cin>>a>>b;
c=a+b;
d=a-b;
e=a*b;
if(c>d&&c>e){cout<<c<<endl;}
else if(d>c&&d>e){cout<<d<<endl;}
else {cout<<e<<endl;}
}
