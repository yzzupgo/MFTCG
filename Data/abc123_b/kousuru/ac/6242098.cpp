#include <bits/stdc++.h>

using namespace std;



int main() {

	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

	int total = 0;
	int minn=1000;
	for (int i = 0; i < 5; i++) {
		if (a[i] % 10 != 0) {
			minn = min(minn, a[i] % 10);
			total += a[i] + (10 - a[i] % 10);
		}
		else {
			total += a[i];
		}
	}
	if (minn == 1000) {
		minn = 0;
		cout << total << endl;
	}
	else {
		cout << total - (10 - minn) << endl;
	}
}