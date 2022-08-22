#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,e,f;
cin>>a>>b;
c=a+b;
d=a-b;
e=a*b;
f=0;
if(c>=d){
f=c;
}else{
f=d;
}
if(f>=d){
cout<<f<<endl;
}else{
cout<<d<<endl;
}
}
