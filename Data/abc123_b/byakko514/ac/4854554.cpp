#include <iostream>


using namespace std;



int main() {
	int a[5], b = 0, c = 0, d = 0, tmp = 114514810, sum = 0;
	bool is = false;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		c = b % 10;

		if (c != 0 && c < tmp) {
			tmp = c;
			d = i;
			is = true;
		}

		a[i] = c;
		if (c == 0) {
			sum += b;
			continue;
		}
		sum += b - c + 10;
	}

	if(is) cout << sum - 10 + a[d] << endl;
	else cout << sum << endl;


	//system("pause");

	return 0;
}