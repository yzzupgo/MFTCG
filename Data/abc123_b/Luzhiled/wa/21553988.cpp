#include <bits/stdc++.h>
using namespace std;

int main() {
  vector< int > as(5);
  for (auto &a : as) cin >> a;
  
  int ans = 1001001001;
  for (int i = 0; i < (int)as.size(); i++) {
    int cnt = as[i];
    for (int j = 0; j < (int)as.size(); j++) {
      if (i == j) continue;
      cnt += (as[j] + 9) / 10;
    }
    
    ans = min(ans, cnt);
  }
  
  cout << ans << endl;
}