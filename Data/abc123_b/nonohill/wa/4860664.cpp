#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> yen(5);
  for (int i = 0; i < 5; i++) {
    cin >> yen.at(i);
  }
  int ans = 0;
  int m = 9;
  for (int i = 0; i < 5; i++) {
    if (yen.at(i) % 10 == 0) {
      ans += yen.at(i);
    } else {
      ans += (yen.at(i) / 10 + 1) * 10;
      if (yen.at(i) % 10 < m) {
        m = yen.at(i) % 10;
      }
    }
  }
  cout << ans - (10 - m) << endl;
}