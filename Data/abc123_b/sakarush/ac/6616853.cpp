#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<cstdlib>
#include<map>
#include<fstream>
#include<string>
#include<sstream>
#include<iomanip>
#include<cmath>

using namespace std;

long long dp[3][100100] = {};
const long long INF = 1LL << 60;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

long long int a[3][100001];

bool hikaku(int a, int b) {
	int c = a % 10;
	int d = b % 10;
	if (c == 0) c = 10;
	if (d == 0) d = 10;
	return c < d;
}
bool zettai(int a, int b) {
	return a > b;
}

int main() {
	vector<int> a(5);
	for (int i = 0; i < 5; i++) {
		cin >> a.at(i);
	}
	sort(a.begin(), a.end(),hikaku);
	int sum = 0;
	for (int i = 1; i < 5; i++) {
		int b = a.at(i);
		if (b % 10 > 0) {
			b += (10 - (b % 10));
		}
		sum += b;
	}
	cout << sum + a.at(0) << endl;
}
