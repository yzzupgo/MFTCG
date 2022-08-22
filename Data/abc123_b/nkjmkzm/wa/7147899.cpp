#include <bits/stdc++.h>
#define rep(i,n,k) for(int i=k;i<n;++i)
using namespace std;

int main(){
  int a, p=0, q=9;
  rep(i,5,0){
    cin >> a;
    if(a % 10 == 0) p += a;
    else{
      if(q > a % 10) q = a % 10;
      int x = a / 10;
      p += (x+1) * 10;
    }
  }
  int ans;
  ans = p - 10 + q;
  cout << ans << endl;
}