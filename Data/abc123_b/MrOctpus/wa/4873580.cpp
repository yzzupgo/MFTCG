#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int time[5];
	int a[5], b[5];
	for (int i = 0; i < 5; i++) {
		cin >> time[i];
		a[i] = time[i] / 10;
		b[i] = time[i] % 10;
	}
	int p = 10;
	int k = 0;
	for (int i = 0; i < 5; i++) {
		if (p > b[i]) {
			p = b[i];
			k = i;
		}
		else continue;
	}
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		if (i != k)ans += 10 * (a[i] + 1);
		else ans += time[i];
	}
	cout << ans << endl;
}