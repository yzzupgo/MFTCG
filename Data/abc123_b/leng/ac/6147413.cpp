#include <bits/stdc++.h>
using namespace std;

int maxtime(int x) {
  x = (x + 9) / 10 * 10;
  return x;
}
int wait(int x) {
  x = maxtime(x) - x;
  return x;
}
int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int ans = maxtime(a) + maxtime(b) + maxtime(c) + maxtime(d) + maxtime(e)
    - max({wait(a), wait(b), wait(c), wait(d), wait(e)});
  cout << ans << endl;
  return 0;
}