#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,M,N) for(int i=M;i<=N-1;i++)
int desit(int n){
int keta=1;
while(n/10>0){
n/=10;
keta++;
}
return keta;
}
int main(){
int n;
cin>>n;
int ans=0;
rep(i,1,n+1){
if(desit(i)%2==1)ans++;
}
cout<<ans<<endl;
return 0;
}
