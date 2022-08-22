#include<bits/stdc++.h>
using namespace std;
signed main(){
int a,b,c;
int ans[1000];
cin>>a>>b;
for(int i=1;i<=a;i++){
ans[i]=ans[i-1]+b+(i-1);
}
if(b<0){
if(a+b<0){
b=0-(b+a);
c=0;
}
if(a+b>0){
b=0;
c=1;
}
}
if(b>0){
b=b;
c=2;
}
if(b==0){
b=0;
c=3;
}
cout<<ans[a]-b<<"\n";
return(0);
}
