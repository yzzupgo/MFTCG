#include <iostream>
#include <vector>

using namespace std;

int maxtime(int x) {
	return (x + 9) / 10 * 10;
}

int main() {
	vector<int> v(5);
	int rem = 0, ans = 0;

	for (int i = 0; i < 5; i++) {
		cin >> v[i];
		ans += maxtime(v[i]);
		rem = max(rem, maxtime(v[i]) - v[i]);
	}
	cout << ans - rem << endl;
}
