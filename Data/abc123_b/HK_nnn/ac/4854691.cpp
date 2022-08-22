#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a(5);
	for (int i=0; i<5; ++i) {
		cin >> a[i];
	}
	vector<int> b(5);
	for (int i=0; i<5; ++i) {
		b[i] = (10-(a[i]%10))%10;
	}
	int sum = accumulate(a.begin(), a.end(), 0);
	int wsum = accumulate(b.begin(), b.end(), 0);
	int max = *max_element(b.begin(), b.end());
	//cout << "max " << max << endl;
	wsum = wsum - max;
	sum += wsum;
	cout << sum << endl;

	return 0;
}