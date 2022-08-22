#include <bits/stdc++.h>
int main()
{
  int ans = 0,min = 0;
  for(int i =0,a; i < 5; i++){std::cin >> a,ans += (a+9)/10*10,min=std::max(min,(a+9)/10*10-a);}
  std::cout << ans - min<<std::endl;
  return 0;
}
