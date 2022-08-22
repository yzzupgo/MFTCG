#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	vector<int> all{ a, b, c, d, e };
	int last = 1000000000000000000;
	for (int i = 0; i < 5; i++) {
		if (all[i]%10 > 0 && all[i]%10 < last) last = all[i]%10;
		if (all[i] % 10 > 0) {
			all[i] += 10 - (all[i] % 10);
		}
	}
	int ans = accumulate(all.begin(), all.end(), 0);
	cout << ans - 10 - last << endl;
	

	return 0;
}