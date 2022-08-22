#include <bits/stdc++.h>
using namespace std;

int maxtime(int x) {
  return (x + 9) / 10 * 10;
}
int wait(int x) {
  return maxtime(x) - x;
}
int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  int finish = maxtime(a) + maxtime(b) + maxtime(c) + maxtime(d) + maxtime(e);
  finish -= max({wait(a), wait(b), wait(c), wait(d), wait(e)});
  cout << finish << endl;
  return 0;
}
  