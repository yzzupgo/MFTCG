#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[100];
	int minv = 10000000;

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i] % 10 == 0) {
			sum += a[i];
		}
		else {
			int num = 10 - (a[i] % 10);
			sum += (num + a[i]);
			minv = min(minv, a[i] % 10);
		}
	}

	if (minv == 10000000) {
		cout << sum << endl;
	}
	else {
		cout << sum - (10 - minv) << endl;
	}

	return 0;
}