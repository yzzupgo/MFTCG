#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec(5);
  for (int i = 0; i < 5; i++) cin >> vec.at(i);

  int A = 10;

  for (int i = 0; i < 5; i++) {
    if (vec.at(i) % 10 != 0) A = min(A, vec.at(i) % 10);
  }

  int ans = 0;

  for (int i = 0; i < 5; i++) {
    if (vec.at(i) % 10 == 0) ans += vec.at(i);
    else {
      int X = vec.at(i) / 10 * 10 + 10;
      ans += X;
    }
  }

  if (A == 10) cout << ans << endl;
  else cout << ans - (10 - A) << endl;
}