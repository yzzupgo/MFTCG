#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define rep(i, n)        for(int i=0; i<(int)(n); ++i)
int main() {
  int a,b,c,d,e,f=10,g=0;
  cin>>a>>b>>c>>d>>e;
  if(a%10!=0){
    f=min(f,a%10);
    g+=(a/10+1)*10;
  }
  else g+=a;
    if(b%10!=0){
    f=min(f,b%10);
    g+=(b/10+1)*10;
  }
  else g+=b;
    if(c%10!=0){
    f=min(f,c%10);
    g+=(c/10+1)*10;
  }
  else g+=c;
    if(d%10!=0){
    f=min(f,d%10);
    g+=(d/10+1)*10;
  }
  else g+=d;
    if(e%10!=0){
    f=min(f,e%10);
    g+=(e/10+1)*10;
  }
  else g+=e;
  cout<<g+f-10;
}