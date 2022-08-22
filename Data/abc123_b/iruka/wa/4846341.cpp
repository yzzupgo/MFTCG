#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,d,e;
  cin >> a >> b >> c >> d >> e;
  int m=9;
  int ans=0;
  if(a%10==0){ans+=a;}
  else{ans+=a/10*10+10; m=min(m,a%10);}
  if(b%10==0){ans+=b;}
  else{ans+=b/10*10+10; m=min(m,b%10);}
  if(c%10==0){ans+=c;}
  else{ans+=c/10*10+10; m=min(m,c%10);}
  if(d%10==0){ans+=d;}
  else{ans+=d/10*10+10; m=min(m,d%10);}
  if(e%10==0){ans+=e;}
  else{ans+=e/10*10+10; m=min(m,e%10);}
  ans=ans-10+m;
  cout << ans << endl;
}