#include <iostream>


using namespace std;



int main() {
	int a[5], b, c, d, tmp = 114514810, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		c = b % 10;

		if (c != 0 && c < tmp) {
			tmp = c;
			d = i;
		}

		a[i] = c;
		if (c == 0) {
			sum += b;
			continue;
		}
		sum += b - c + 10;
	}

	cout << sum - 10 + a[d] << endl;



	//system("pause");

	return 0;
}