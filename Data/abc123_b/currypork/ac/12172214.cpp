#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define rep(i, n)        for(int i=0; i<(int)(n); ++i)
int main() {
  int a,b,c,d,e,g=0;cin>>a>>b>>c>>d>>e;
  int f=10;
  if(a%10==0)g+=a; 
  else{
    g+=a/10*10+10;
    f=min(f,a%10);
  }
    if(b%10==0)g+=b; 
  else{
    g+=b/10*10+10;
    f=min(f,b%10);
  }
    if(c%10==0)g+=c; 
  else{
    g+=c/10*10+10;
    f=min(f,c%10);
  }
    if(d%10==0)g+=d; 
  else{
    g+=d/10*10+10;
    f=min(f,d%10);
  }  
  if(e%10==0)g+=e; 
  else{
    g+=e/10*10+10;
    f=min(f,e%10);
  }
  if(f==10)cout<<g;
  else cout<<g-10+f;
}