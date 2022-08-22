#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

int main() {
	std::vector<int> D(5);
	int min = 10;
	int I;
	for (int i = 0; i < 5; ++i) {
		std::cin >> D[i];
		if (D[i] % 10 < min && D[i] % 10 != 0) {
			min = D[i] % 10;
			I = i;
		}
	}
	int ans = 0;
	for (int i = 0; i < 5; ++i) {
		if (i == I)
			ans += D[i];
		else {
			if (D[i] % 2 == 0)
				ans += D[i];
			else
				ans += ((D[i] / 10) + 1) * 10;
		}
	}
	std::cout << ans << std::endl;

	return 0;
}