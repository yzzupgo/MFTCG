#include <bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#define ll long long
#define BUF 1e5
#define INF 1<<30
using namespace std;
ll MOD = 1e9 + 7;
ll A, B, C, D, G, H, N, M, L, K, P, Q, R, W, X, Y, Z;
string S;
ll ans = 0;

int main() {
	int a[5];
	int mn = 10;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		mn = min(a[i] % 10, mn);
		if (a[i] % 10 > 0)a[i] = 10 * (a[i] / 10 + 1);
		ans += a[i];
	}
	cout << ans-(10-mn) << endl;
}