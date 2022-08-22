#include <bits/stdc++.h>
int main()
{
  int ans = 0,rem = 9;
  for(int i =0,a; i < 5; i++){std::cin >> a,ans += (a+9)/10*10,rem = std::min(rem,a%10);}
  std::cout << ans - (rem==0?0:10-rem)<<std::endl;
  return 0;
}
