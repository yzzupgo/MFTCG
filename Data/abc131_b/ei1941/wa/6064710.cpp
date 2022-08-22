#include<bits/stdc++.h>
using namespace std;
signed main(){
int a,b;
int ans[1000];
cin>>a>>b;
for(int i=1;i<=a;i++){
ans[i]=ans[i-1]+b+(i-1);
}
if(b<0){
if(a<b){
b=0-(b+a);
}
if(a>b){
b=0;
}
}
if(b>0){
b=b;
}
if(b==0){
b=0;
}
cout<<ans[a]-b<<"\n";
return(0);
}
