#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
  int a[5],ans=0,k=1000,c=0;
  cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  rep(i,5) if(a[i]%10!=0&&a[i]%10<k) k=a[i]%10,c=i;
  rep(i,5){
    if(a[i]%10==0||i==c) ans+=a[i];
    else ans+=(a[i]/10+1)*10;
  }
  cout<<ans;
}