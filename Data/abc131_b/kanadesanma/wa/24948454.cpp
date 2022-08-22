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
for(int i=0;i<n;i++){
if(abs(sum-(l+i-1))<sl){
sl=min(abs(sum-(l+i-1)),sl);
ans=sum-(l+i-1);
}
}
cout<<ans<<endl;
}
