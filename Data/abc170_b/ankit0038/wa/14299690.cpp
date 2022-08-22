#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
int ans = 0;
cin>>x>>y;
for(int i=0;i<=x;i++){
for(int j=0;j<=x;j++){
if(i+j<=x){
if(i*4+j*2==y){
ans = 1;
break;
}
}
}
}
if(ans){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
}
