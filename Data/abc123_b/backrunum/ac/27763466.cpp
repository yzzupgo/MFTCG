#include <bits/stdc++.h>
#define rep(i, n) for (long long i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using V = vector<int>;
 
int main()
{
  V a(5);
  rep(i,5) cin >> a[i];
  ll ans = 0;
  int d = 10;
  rep(i,5) {
    d = min(d, (a[i] % 10 == 0)? 10 : a[i] % 10);
    ans += a[i] % 10 == 0 ? a[i] : (a[i] / 10 + 1) * 10;
  }
  ans -= 10 - d;
  cout << ans << endl;
  return 0;
}