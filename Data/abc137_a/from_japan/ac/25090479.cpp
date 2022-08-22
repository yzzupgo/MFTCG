#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,e,ans=1;
cin>>a>>b;
c=a+b;
d=a-b;
e=a*b;
if(c>d&&c>e){
cout<<c<<endl;
}else if(d>c&&d>e){
cout<<d<<endl;
}else if(e>c&&e>d){
cout<<e<<endl;
}else{
cout<<c<<endl;
}
return(0);
}
