#include <bits/stdc++.h>
namespace IN {
#define BUF_SIZE 1 << 17
static char buf[BUF_SIZE], *fs = buf, *ft = buf;
inline int nc() { return fs == ft && (ft = (fs = buf) + fread(buf, 1, BUF_SIZE, stdin), fs == ft) ? EOF : *fs++; }
template <typename T>
inline int rn(T &x) {
x = 0;
int f = 0;
char ch = nc();
while (ch < '0' || ch > '9') {
if (ch == '-') f = 1;
ch = nc();
if (ch == EOF) return EOF;
}
while (ch >= '0' && ch <= '9') {
x = x * 10 + ch - 48;
ch = nc();
}
x = f ? -x : x;
return 0;
}
template <typename T>
inline int read(T &x) {
return rn(x);
}
template <typename T, typename... Args>
inline int read(T &x, Args &...args) {
rn(x);
return read(args...);
}
#undef BUF_SIZE
}
namespace OUT {
template <typename T>
inline void print(std::string, T x) {
std::cout << x << std::endl;
}
template <typename T, typename... Args>
inline void print(std::string sep, T x, Args... args) {
std::cout << x << sep;
print(sep, args...);
}
}
using namespace IN;
using namespace OUT;
using namespace std;
#define INF 0x3f3f3f3f
#define LL long long
#define ALL(A) A.begin(), A.end()
#define REP(i,n) for (LL i = 0; i < (LL)n; ++i)
#define REP1(i,n) for (LL i = 1; i <= (LL)n; ++i)
#define DISP(arr,n) \
do { \
REP(i, n) cout << arr[i] << ' '; \
cout << endl; \
} while (0)
#define DISP1(arr,n) \
do { \
REP1(i, n) cout << arr[i] << ' '; \
cout << endl; \
} while (0)
#define DISP_T(arr,n,m) \
do { \
REP(i, n) { \
REP(j, m) cout << arr[i][j] << ' '; \
cout << endl; \
} \
} while (0)
#define DISP_T1(arr,n,m) \
do { \
REP1(i, n) { \
REP1(j, m) cout << arr[i][j] << ' '; \
cout << endl; \
} \
} while (0)
#define DISP_V(vec) \
do { \
for (auto elem : vec) cout << elem << ' '; \
cout << endl; \
} while (0)
#define SIZE 300010
int main() {
int x, y;
cin >> x >> y;
if (!((4 * x - y) & 1) && 4 * x - y >= 0 && x - (4 * x - y) / 2 >= 0) {
cout << "Yes" << endl;
} else
cout << "No" << endl;
return 0;
}
