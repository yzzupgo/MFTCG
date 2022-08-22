#include<bits/stdc++.h>
using namespace std;
signed main(){
  long long b[100],c=0,d=0,e,f=1000000,t,g[100000];
  int a[100];
  for(int i=0;i<5;i++){
     cin>>c;
    if(c%10==0) b[i]=0;
    else b[i]=abs(10-(c%10));
    a[i]=c-(c%10);
  }
  sort(b,b+5);
  for(int i=0;i<5;i++){
    d+=a[i]+b[i];
  }
  cout<<d-b[4]<<"\n";}