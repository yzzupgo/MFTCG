#include <bits/stdc++.h>
using namespace std;

int maxtime(int n) {
  n = (n + 9) / 10 * 10;
  return n;
}
int re(int n) {
  n = maxtime(n) - n;
  return n;
}

int main() {
  int a, b, c, d, e;
  cin >> a, b, c, d, e;
  int ans = maxtime(a) + maxtime(b) + maxtime(c) + maxtime(d) + maxtime(e)
    - max({re(a), re(b), re(c), re(d), re(e)});
  cout << ans << endl;
  return 0;
}