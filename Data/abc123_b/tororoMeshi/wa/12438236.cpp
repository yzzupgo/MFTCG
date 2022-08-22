#include <iostream>
using namespace std;

int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	int min = 10;
	int last = 0;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 10 != 0) {
			cnt++;
			if (a[i] % 10 < min) {
				min = a[i] % 10;
			}
		}
	}

	int ans = (cnt-1) * 10;
	for (int i = 0; i < 5; i++) {
		ans += a[i] / 10 * 10;
	}
	if (1 < cnt) {
		ans += min;
	}
	cout << ans << endl;
	return 0;
}
