#include <bits/stdc++.h>

int main() {
  std::vector<int> c(5);
  for (int i = 0; i < 5; ++i) std::cin >> c[i];
  int ans = 1e5;
  for (int i = 0; i < 5; ++i) {
    int tmp = 0;
    for (int j = 0; j < 5; ++j) {
      if (j == i) tmp += c[j];
      else tmp += c[j] + (c[j]%10==0 ? 0 : 10-c[j]%10);
    }
    ans = std::min(ans, tmp);
  }
  std::cout << ans << std::endl;
  return 0;
}