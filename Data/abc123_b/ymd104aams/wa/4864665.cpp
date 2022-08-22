#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

int a[5];
int m=200;
int sum=0;

void solve(){
  rep(i,5) cin >> a[i];
//cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  for(int i=0; i<5; i++){
    if(a[i]%10==0) sum += a[i];
    else {
    m=min(m, a[i]%10);
    sum += (a[i]/10+1)*10;
    }
  }
  sum = sum - 10 + m;
  cout << sum << endl;
}

int main(){
  solve();
  return 0;
}
  