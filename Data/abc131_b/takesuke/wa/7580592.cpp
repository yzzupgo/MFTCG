#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int(i)=0;i<(n);i++)
int main(){
int n,l,ans=0,min=1000,mini;cin>>n>>l;
REP(i,n){
ans+=l+i;
if(abs(l+i)<min) mini=i;
}
cout<<ans-mini-l;
}
