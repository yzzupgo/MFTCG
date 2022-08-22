#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <unordered_map>
#include <algorithm>

struct pair_hash {
	template <class T1, class T2>
	std::size_t operator() (const std::pair<T1, T2> &pair) const {
		return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
	}
};

int main()
{
  int a[5];
  int res = 0;
  int min = 9;
  for (int i=0; i<5; i++) {
    std::cin >> a[i];
    int x = a[i] % 10;
    if (x!=0 && x<min) min = x;
    if (x!=0) a[i] += 10 - x;
    //std::cout << a[i] << std::endl;
    res += a[i];
  }
  res -= 10 - min;

  std::cout << res;

  return 0;
}
