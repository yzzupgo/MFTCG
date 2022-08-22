#include <iostream>
using namespace std;

int main() {
	int a[5];
	int min = 10, keep = 5;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i] % 10 != 0 && min > a[i] % 10) {
			min = a[i] % 10;
			keep = i;
		}
	}

	int sum = 0;
	if (keep == 5) {
		for (int i = 0; i < 5; i++)
			sum += a[i];
		cout << sum << endl;
		return 0;
	}
	
	int lastone = a[keep] % 10 - 10;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 10 != 0)
			a[i] = (a[i] / 10) * 10 + 10;
		sum += a[i];
	}
	sum += lastone;
	cout << sum << endl;
	return 0;
}