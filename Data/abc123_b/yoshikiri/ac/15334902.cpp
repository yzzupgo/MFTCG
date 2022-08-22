#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n = 5;
  int a[n];
  rep(i, n) cin >> a[i];

  int ans = 0;
  int mx = 0;
  rep(i, n) {
    int x = a[i] % 10;
    if (x == 0) {
      ans += a[i];
      continue;
    }
    mx = max(mx, 10 - x);
    for (int j = a[i] + 1; j <= 130; ++j) {
      if (j % 10 == 0) {
        ans += j;
        break;
      }
    }
  }

  ans -= mx;
  cout << ans << endl;
  return 0;
}
