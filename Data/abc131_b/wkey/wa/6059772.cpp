#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
signed main(){
int n,l;
cin>>n>>l;
int ans=0;
int kai;
for(int i=1;i<=n;i++){
if(i+l-1==0){
kai=0;
break;
}
else if(i==n){
kai=1;
}
}
if(kai==0){
for(int i=1;i<=n;i++){
ans+=i+l-1;
}
cout<<ans<<endl;
}
else{
for(int i=1;i<=n;i++){
if(i==1&&i+l-1>=1){
continue;
kai=0;
}
if(kai==1&&i==n){
break;
}
ans+=i+l-1;
}
cout<<ans<<endl;
}
}
