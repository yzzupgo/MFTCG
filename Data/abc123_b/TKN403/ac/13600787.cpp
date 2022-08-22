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
	int rec = 0;
	int min = A[0]%10;
	for (int i = 0; i < 5; i++) {
		if (A[i] % 10 != 0 && A[i] % 10 < min) {
			min = A[i] % 10;
			rec = i;
		}
	}
	for(int i=0;i<5;i++){
		if (A[i] % 10 != 0) {
			ans += 10 * ((A[i] + 10) / 10);
		}
		else {
			ans += A[i];
		}
	}
	if (A[rec] % 10 != 0) {
		ans += A[rec] - 10 * ((A[rec] + 10) / 10);
	}
	cout << ans << endl;
	return 0;
}