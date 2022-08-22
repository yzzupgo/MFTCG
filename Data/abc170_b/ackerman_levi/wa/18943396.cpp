#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
for(int i=0;i<=y/2;i++){
for(int j=0;j<=j/4;j++){
if(((2*i)+(4*j))==y){
if(i+j==x){
cout<<"Yes";
return 0;
}
}
if(((2*i)+(4*j))>y) break;
}
}
cout<<"No";
return 0;
}
