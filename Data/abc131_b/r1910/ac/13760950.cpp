#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l,sum=0,ans=1000;
cin>>n>>l;
for(int i=0;i<n;i++){
sum+=i+l;
}
for(int i=0;i<n;i++){
if(abs(sum-(sum-i-l))<abs(sum-ans)){
ans=sum-i-l;
}
}
cout<<ans<<endl;
return(0);
}
