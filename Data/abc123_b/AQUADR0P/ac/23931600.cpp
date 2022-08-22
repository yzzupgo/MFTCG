#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<queue>
#include<numeric>
using namespace std;

int main() {
	vector<int> a(5);
	int m = 10, ans = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		a[i]--;
		ans += (a[i] + 10) / 10 * 10;
		m = min(m, a[i] % 10);
	}
	cout << ans + m + 1 - 10 << endl;
}