#include <bits/stdc++.h>
#define LL long long
#define db double
using namespace std;

#define MAXN 200200
#define MAXE 400400

typedef pair<int, int> pii;
#define X first
#define Y second
const LL INF = (1LL << 62) | 3;
#define Debug(...) fprintf(stderr, __VA_ARGS__)

template <typename T> inline void read(T &x) {
    int ch = getchar();
    bool fg = false;
    for (x = 0; !isdigit(ch); ch = getchar()) {
        if (ch == '-') {
            fg = true;
        }
    }
    for (; isdigit(ch); ch = getchar()) {
        x = x * 10 + ch - '0';
    }
    if (fg) {
        x = -x;
    }
}

template <typename T> inline bool chkmin(T& x, const T& y) { return y < x ? (x = y, true) : false; }
template <typename T> inline bool chkmax(T& x, const T& y) { return x < y ? (x = y, true) : false; }

int a[6], n, m, k = 1000;

signed main() {
	for(int i = 1; i <= 5; i++) read(a[i]);
	for(int i = 1; i <= 5; i++) k = min(k, a[i] % 10 == 0 ? 1000 : a[i] % 10);
	for(int i = 1; i <= 5; i++) a[i] = (a[i] + 9) / 10 * 10;
	printf("%d\n", a[1] + a[2] + a[3] + a[4] +a[5] + k - 10);
	return 0;
}