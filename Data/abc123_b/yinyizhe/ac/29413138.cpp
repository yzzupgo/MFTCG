#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int kmax = 15;

int a[kmax], ans;

int main() {
  for (int i = 1, x; i <= 5; i++) {
    cin >> x;
    ans += x;
    a[i] = (x - 1) % 10;
  }
  sort(a + 1, a + 6);
  for (int i = 5; i > 1; i--) {
    ans += 9 - a[i];
  }
  cout << ans;
  return 0;
}