#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n = 5;
  int a[n];
  rep(i, n) cin >> a[i];

  int mx = 0;
  rep(i, n) {
    if (a[i] % 10 == 0) continue;
    mx = max(mx, 10 - a[i] % 10);
  }

  int ans = 0;
  rep(i, n) {
    ans += a[i] / 10 * 10;
    if (a[i] % 10 != 0) ans += 10;
  }
  ans -= mx;
  cout << ans << endl;
  return 0;
}
