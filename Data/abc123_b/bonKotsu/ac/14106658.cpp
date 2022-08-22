#include <bits/stdc++.h>
using namespace std;

void chmin(int&a, int b) {
  if (a > b) a = b;
}

int main() {
  int A[5];

  for (int i = 0; i < 5; i++) {
    cin >> A[i];
  }
  
  int mod_min = 10;
  for (int i = 0; i < 5; i++) {
    if (A[i] % 10) {
      chmin(mod_min, A[i] % 10);
    }
  }
  
  int ans = 0;
  if (mod_min == 10) {
    for (int i = 0; i < 5; i++) {
    ans += A[i];
    }
    cout << ans << endl;
  } else {
    for (int i = 0; i < 5; i++) {
      if (A[i] % 10) {
        ans += A[i] + (10-(A[i]%10));
    } else {
        ans += A[i];
      }
    } 
  
    cout << ans - 10 + mod_min << endl;

  }
}