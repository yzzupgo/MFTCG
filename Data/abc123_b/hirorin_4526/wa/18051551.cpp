#include <bits/stdc++.h>

int main() {
  std::vector<int> c(5);
  for (int i = 0; i < 5; ++i) std::cin >> c[i];
  int ans = 0;
  for (int i = 0; i < 5; ++i) ans += (c[i]%10 == 0 ? c[i] : c[i] + 10-c[i]%10); 
  for (int i = 0; i < 5; ++i) ans = std::min(ans, ans-(c[i]%10 == 0 ? 0 : 10-c[i]%10));
  std::cout << ans << std::endl;
  return 0;
}