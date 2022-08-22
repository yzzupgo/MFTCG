#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> a(5);
	int sol = 0;
	int res = 1e2;
	rep(i, 5) {
		cin >> a[i];
		if (a[i] % 10 != 0) {
			res = min(res, a[i] % 10);
			a[i] += 10 - a[i] % 10;
		}
	}
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		ans += a[i];
	}
	cout << ans -10 + res << endl;
}