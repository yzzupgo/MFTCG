#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
typedef long long LL;

int int_vector_find(std::vector<int> vec, int num) {
	auto itr = std::find(vec.begin(), vec.end(), num);
	int index = std::distance(vec.begin(), itr);

	if (index != vec.size()) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	std::vector<int> n;
	int ans = 0;
	for (int i = 0; i < 5; ++i) {
		int a;
		std::cin >> a;
		n.push_back(a);
	}

	std::sort(n.begin(),n.end());

	int temp = 10000000;

	for (int i = 0; i < 5; ++i) {
		if (n[i] % 10 < temp&&n[i]%10!=0) {
			temp = n[i];
		}
		if (n[i] % 10 == 0) {
			ans += n[i];
		}
		else {
			ans += (((n[i] / 10) * 10 )+ 10);
		}
	}

	ans -= (((temp / 10) * 10) + 10);

	std::cout << ans + temp << std::endl;

}