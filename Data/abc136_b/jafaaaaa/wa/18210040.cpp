#include<bits/stdc++.h>
using namespace std;
int solve(int n){
int keta=0;
while(n>0){
n/=10;
keta++;
}
return keta;
}
int main(){
int n,ans=0;cin>>n;
for(int i=1;i<=n;i++){
if(solve(n)%2!=0) ans++;
}
cout<<ans<<endl;
}
