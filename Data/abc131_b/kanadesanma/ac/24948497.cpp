#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int sum=0;
for(int i=1;i<=n;i++){
sum=sum+l+i-1;
}
int sl=1000000;
int ans;
for(int i=1;i<=n;i++){
if(abs(l+i-1)<sl){
sl=abs(l+i-1);
ans=sum-(l+i-1);
}
}
cout<<ans<<endl;
}
