#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i);
using ll = long long;

int main() {
  vector<int> t(5);
  for (int i = 0; i < 5; i++) {
    cin >> t.at(i);
  }

  int min_amari = 100, min_i = 100;
  for (int i = 0; i < 5; i++) {
    int amari = t.at(i) % 10;
    if (amari != 0 && min_amari > amari) {
      min_amari = amari;
      min_i = i;
    }
  }

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    if (i == min_i) continue;
    sum += (t.at(i) + 9) / 10;
  }
  
  int ans = sum * 10;
  if (min_i != 100) ans += t.at(min_i);

  cout << ans << endl;
  return 0;
}