#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[5];
  for (int i; i<5; i++) cin >> a[i];
  int ans = 0;
  for (int i; i<5; i++) ans += (a[i]+9)/10;
  ans = ans*10;
  int res=10;
  for (int p:a){
    res =min(res,p%10);
  }
  if (res==0) ans = ans;
  else ans = ans-10+res;
  cout << ans << endl;
}