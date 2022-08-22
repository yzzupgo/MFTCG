#include <bits/stdc++.h>
using namespace std;


int main() {
  int a[5];
  int b = 10;
  int c = 0;
  for(int i = 0;i < 5;i++){
    cin >> a[i];
    if(a[i]%10 < b && a[i]%10 != 0){
      c = i;
      b = a[i]%10;
    }
  }
  int ans = 0;
  for(int i = 0;i < 5;i++){
    if(i == c){
      ans += a[i];
    }else{
      int x = a[i]%10;
      if(x != 0){
        x = a[i] + 10 - x;
        ans += x;
      }else{
        x = a[i];
        ans += x;
      }
    }

  }
  cout << ans << endl;


}
