#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e6 + 10;
const int mod = 1e9 + 7;
#define debug(x) cout << #x << " --> " << (x) << endl;
namespace Read {
#define R read()
	inline ll read() {
		ll c = getchar(), Nig = 1, x = 0;
		while (!isdigit(c) && c != '-')
			c = getchar();
		if (c == '-')
			Nig = -1, c = getchar();
		while (isdigit(c))
			x = ((x << 1) + (x << 3)) + (c ^ '0'), c = getchar();
		return Nig * x;
	}
	void print(ll n) {
		if (n > 9) print(n / 10);
		putchar(n % 10 + '0');
	}
	void print(ll n, char ch) {
		if (n < 0) printf("-"), n = -n;
		print(n); printf("%c", ch);
	}
};
using namespace Read;

int main() {
	vector<int> a(5);
	for (auto& i : a) cin >> i;

	int sum = 0;
	for (auto i : a) {
		sum += (i + 9) / 10 * 10;
	}
	int mi = 100;
	for (auto i : a) {
		int m = i % 10;
		if (m) mi = min(mi, m);
	}
	// debug(mi);
	cout << sum - 10 + mi << endl;
	return 0;
}