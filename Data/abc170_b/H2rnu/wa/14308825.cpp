#include<iostream>
using namespace std;
int main(){
int X,Y;
int ashi;
int ans=-1;
cin>>X>>Y;
for(int i=0;i<=X;i++){
for(int j=0;j<=X;j++){
ashi=i*2+j*4;
if(Y == ashi){
ans=ashi;
}
}
}
if(ans!=-1) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
