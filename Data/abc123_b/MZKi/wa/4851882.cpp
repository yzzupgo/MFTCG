#include<bits/stdc++.h>
using namespace std;

int main() {
  int a[5], max=9, c, cmax, ans = 0;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
  for(int i = 0; i < 5; i++) {
    if(a[i] % 10 < max && a[i]%10 != 0){
      max = a[i]%10;
      cmax = a[i];
      c=i;
    }
  }
  a[c] = 0;
  for(int i = 0; i < 5; i++) {
    if(a[i] % 10 != 0) a[i] = (a[i] / 10 * 10) + 10;
    ans += a[i];
  }
  cout << ans + cmax;
}