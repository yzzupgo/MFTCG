#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main(){
  int k[5];
  int w[5];
  rep(i,5){
    int q;
    cin >> q;
    k[i]=q;
    w[i]=((q-1)/10+1)*10;
  }
  int ans=10000000;
  rep(z,5){
    int e=0;
    rep(c,5){
      e+=k[c];
    }
    e=e-k[z]+w[z];
    ans=min(ans,e);
  }
  cout << ans << endl;
}
