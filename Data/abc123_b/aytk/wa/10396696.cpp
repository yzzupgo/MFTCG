#include <iostream>
using namespace std;

int main() {
	int a[5];
	int min = 10, keep;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i] % 10 != 0 && min > a[i] % 10) {
			min = a[i] % 10;
			keep = i;
		}
	}
	int lastone = a[keep] % 10 - 10;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 10 != 0)
			a[i] = (a[i] / 10) * 10 + 10;
		sum += a[i];
	}
	sum += lastone;
	cout << sum << endl;
	return 0;
}