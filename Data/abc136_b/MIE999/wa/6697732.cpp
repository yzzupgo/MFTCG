#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << ": " << x << endl
#define out(x) cout << x << endl
#define repeat (i, a, b) for (int i = (a); i < (b); i++)
#define rep (i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
const int M = 1e9 + 7;
const int INF = 1e9;
const int MAX_V = 300 + 5;
const int MAX_N = 1e5 + 5;
int main() {
int n;
cin >> n;
int res = 0;
if (n <= 9) {
res += n;
} else if (10 <= n && n <= 99) {
res += 9;
} else if (100 <= n && n <= 999) {
res += 9;
res += n - 99;
} else if (1000 <= n && n <= 9999) {
res += 9;
res += 899;
} else if (10000 <= n && n <= 100000) {
res += 9;
res += 899;
res += n - 9999;
}
out(res);
}
