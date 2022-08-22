#include <iostream>
int main()
{
int N;
std::cin >> N;
int ans = 0;
if (N>=10000) ans += std::min(99999, N) - 9999;
if (N>=100) ans += std::min(999, N) - 99;
if (N>=1) ans += std::min(9, N);
std::cout << ans << std::endl;
return 0;
}
