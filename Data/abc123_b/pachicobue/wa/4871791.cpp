#include <bits/stdc++.h>
int main()
{
  int A[5];
  for(int i = 0; i < 5; i++){std::cin >> A[i];}
  std::sort(A, A+5,std::greater<int>{});
  int ans = 0;
  for(int i = 0;i < 5; i++){ans = std::max(ans, A[i]+10*i);}
  std::cout << ans << std::endl;
  return 0;
}