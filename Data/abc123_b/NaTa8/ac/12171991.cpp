#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

typedef std::pair<int, int> pii;

int main()
{
  std::vector<pii> AE(5);
  for (int i = 0; i < 5; i++)
  {
    std::cin >> AE.at(i).second;
    AE.at(i).first = (10 - AE.at(i).second%10)%10;
  }
  sort(AE.begin(), AE.end());
  int ans = 0;
  for (int i = 0; i < 4; i++)
  {
    ans += AE.at(i).first + AE.at(i).second;
  }
  std::cout << ans + AE.at(4).second << std::endl;
}
