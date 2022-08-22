#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int ans=-1;
int a,b;
for(int i=0;i<=x;i++){
a=0; b=x-i;
if(2*a+4*b==y){
ans=1;
}
}
if(ans==1){
cout<<"Yes\n";
}else{
cout<<"No\n";
}
return 0;
}
