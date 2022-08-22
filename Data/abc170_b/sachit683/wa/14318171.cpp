#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int flag=0;
if(4*x<y||2*x>y||y%2==1){
flag=1;
}
if(!flag){
for(int i=0,j=x;i<=x&&j>=0;i++,j--){
if(4*j+2*i==y){
flag=1;
break;}
}
}
if(flag){
cout<<"Yes";}else{
cout<<"No";}
return 0;
}
