#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
ll n;
cin>>n;
ll i=0;
ll a=n,b=n;
while(1){
a=a/10;
b=n%10;
i++;
if(a==0)break;
}
ll tem=1,ans=0;
for(ll j=0;j<i-1;j++){
if(j%2==0){
ans+=9*tem;
}
tem*=10;
}
if(i%2==1){
ans+=n-tem;
ans++;
}
cout<<ans<<endl;
}
