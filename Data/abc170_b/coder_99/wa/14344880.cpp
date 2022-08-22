#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(y%2!=0){
cout<<"No";
return 0;
}
float c=(float)y/x;
if((y/4)>x){
cout<<"No";
return 0;
}
if(x==1 && y==2){
cout<<"Yes";
return 0;
}
if(x==1 && y==4){
cout<<"Yes";
return 0;
}
if(c==2 || c==4){
cout<<"No";
return 0;
}
else cout<<"Yes";
}
