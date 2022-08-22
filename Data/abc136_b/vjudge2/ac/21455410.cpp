#include <iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
void solve (){
int n,siz=0;
cin>>n;
int t=n;
while(n){
n=n/10;
siz++;
}
if(siz%2==0){
if(siz==2){
cout<<"9";
}
if(siz==4) cout<<"909";
if(siz==6) cout<<"90909";
}
else{
if(siz==1){
cout<<t;
}
if(siz==3){
cout<<t-90;
}
if(siz==5){
cout<<909+t-9999;
}
}
}
int main(){
int t=1;
while(t--){
solve();
}
return 0;
}
