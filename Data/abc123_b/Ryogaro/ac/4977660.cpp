#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main() {
	
	int A, B, C, D, E;
	int min = 99999;
	int ans = 0;
	cin >> A >> B >> C >> D >> E;
	int a[] = { A, B, C, D, E };

	for (int i = 0; i <= 4; i++) {
		if (a[i] % 10 < min && a[i] % 10 > 0) {
			min = a[i] % 10;
		}
		if (a[i] % 10 > 0) {
			a[i] = a[i] + (10 - a[i] % 10);
		}
		ans += a[i];
	}

	if (min == 99999) {
		min -= 99989;
	}
	if (ans < 50) {
		ans = 40;
	}
	cout << ans - (10 - min);
}