#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
int x,y,flag=0,cnt=0;
cin>>x>>y;
for(int i=0;i<=x;i++){
cnt=i*2+(x-i)*4;
if(cnt==y){
flag=1;
}
cnt=0;
}
if(flag==1){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
