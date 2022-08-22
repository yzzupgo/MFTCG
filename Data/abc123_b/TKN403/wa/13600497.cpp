#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
	vector<int> A(6);
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
	}
	int ans = 0;
	int min = 100;
	for (int i = 0; i < 5; i++) {
		if (A[i]%10 != 0 && A[i] % 10 < min) {
			min = A[i] % 10;
		}
		if (A[i] % 10 != 0) {
			ans += 10 * ((A[i] + 10) / 10);
		}
		else {
			ans += A[i];
		}
	}
	cout << ans - (10 - min) << endl;
	return 0;
}