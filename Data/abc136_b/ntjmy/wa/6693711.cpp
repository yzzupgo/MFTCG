#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
int main(void)
{
int64_t num[3] = {9, 1000-100, 100000-10000};
int64_t N;
std::cin >> N;
std::string str = std::to_string(N);
int64_t ans = 0;
switch (str.size()) {
case 1:
ans = N;
break;
case 2:
ans = num[0];
break;
case 3:
ans = num[0] + N - 100 + 1;
break;
case 4:
ans = num[0] + num[1];
break;
case 5:
ans = num[1] + num[2] + N - 10000 + 1;
break;
case 6:
ans = num[0] + num[1] + num[2];
break;
}
std::cout << ans << std::endl;
return 0;
}
