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
    mx = max(mx, 10 - (a[i] % 10));
    ans += (a[i] + 9) / 10 * 10;
  }

  if (mx != 10) ans -= mx;
  cout << ans << endl;
  return 0;
}
