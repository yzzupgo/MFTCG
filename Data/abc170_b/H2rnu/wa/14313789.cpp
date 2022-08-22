#include<iostream>
using namespace std;
int main(){
int X,Y;
int ashi;
int ans=-1;
cin>>X>>Y;
for(int i=0;i<=X;i++){
for(int j=0;j<=X-i;j++){
ashi=i*2+j*4;
if(Y == ashi){
ans=ashi;
}
}
}
if(ans==-1) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
return 0;
}
