#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
	int a[5];
	int i,k,time;

	time = 0;
	for (i = 0; i < 5; i++)
		a[i] = 0;

	cin >> a[0] >> a[1] >> a[2]>> a[3] >> a[4];

	for (i = 0; i < 5; i++){
		if (a[i] % 10) {
			time += a[i];
			a[i] = 0;
		}
	}

	for (k = 9; 0 < k;k--) {
		if (a[i] % 10 == k) {
			time = time + a[i] + (10 - k);
			a[i] = 0;
		}
	}
	cout << time;

	return 0;
}