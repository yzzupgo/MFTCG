#define LOCAL
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
using ll = long long;
using P = pair<int, int>;

#define REP(i, x) for (int i = 0; i < (int) (x); i++)
#define REPS(i, x) for (int i = 1; i <= (int) (x); i++)
#define RREP(i, x) for (int i = ((int) (x) -1); i >= 0; i--)
#define RREPS(i, x) for (int i = ((int) (x)); i > 0; i--)
#define ALL(x) ((x).begin(), (x).end())
#define SIZE(x) ((int) (x).size())
#define BITS(x) (1LL << (x))

constexpr int INF = 1001001001;
constexpr ll LINF = 1001001001001001001LL;
constexpr int MOD = 1000000007;
constexpr double EPS = 1e-10;
constexpr double PI = 3.141592653589793;
constexpr int dx4[4] = {1, 0, -1, 0};
constexpr int dy4[4] = {0, 1, 0, -1};
constexpr int dx8[8] = {1, 1, 1, 0, 0, -1, -1, -1};
constexpr int dy8[8] = {1, 0, -1, 1, -1, 1, 0, -1};

random_device seed_gen;
mt19937 mrand(seed_gen());
mt19937_64 mrand64(seed_gen());
int rand32(int x) {
	return mrand() % x;
}
ll rand64(long x) {
	return mrand64() % x;
}

template<typename A, typename B> ostream& operator<<(ostream& out, const pair<A, B>& a) {
	out << "(" << a.first << "," << a.second << ")";
	return out;
}
template<typename T, size_t N> ostream& operator<<(ostream& out, const array<T, N>& a) {
	out << "[";
	bool first = true;
	for (auto& v : a) {
		out << (first ? "" : ",");
		out << v;
		first = 0;
	}
	out << "]";
	return out;
}
template<typename T> ostream& operator<<(ostream& out, const vector<T>& a) {
	out << "[";
	bool first = true;
	for (auto& v : a) {
		out << (first ? "" : ",");
		out << v;
		first = 0;
	}
	out << "]";
	return out;
}
template<typename T, class Cmp> ostream& operator<<(ostream& out, const set<T, Cmp>& a) {
	out << "{";
	bool first = true;
	for (auto& v : a) {
		out << (first ? "" : ",");
		out << v;
		first = 0;
	}
	out << "}";
	return out;
}
template<typename U, typename T, class Cmp> ostream& operator<<(ostream& out, const map<U, T, Cmp>& a) {
	out << "{";
	bool first = true;
	for (auto& p : a) {
		out << (first ? "" : ",");
		out << p.first << ": " << p.second;
		first = 0;
	}
	out << "}";
	return out;
}
#ifdef LOCAL
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...) 42
#endif
template<typename Arg1> void __f(const char* name, Arg1&& arg1) {
	cerr << name << ": " << arg1 << endl;
}
template<typename Arg1, typename... Args> void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cerr.write(names, comma - names) << ": " << arg1 << " |";
	__f(comma + 1, args...);
}

struct fast_ios {
	static constexpr int IOS_PREC = 15;
	static constexpr bool AUTOFLUSH = false;

	fast_ios() {
		cin.tie(nullptr);
		ios::sync_with_stdio(false);
		cout << fixed << setprecision(IOS_PREC);
		if (AUTOFLUSH) cout << unitbuf;
	}
} fast_ios_;

int t[5];
int s[5];

int main() {
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		cin >> t[i];
		int p = t[i];
		if (p % 10) {
			p -= p % 10;
			p += 10;
		}
		s[i] = p;
	}
	int m = INF;
	int id = -1;
	for (int i = 0; i < 5; i++) {
		if (t[i] % 10 && m > t[i] % 10) {
			m = t[i] % 10;
			id = i;
		}
		ans += s[i];
	}
	ans += t[id] - s[id];
	cout << ans << endl;
	return 0;
}