#include <bits/stdc++.h>
#define ms(a,b) memset(a, b, sizeof(a))
#define rep(a,b,c) for(int a = (int)(b); a < (int)(c); a++)
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define m_p(a,b) make_pair(a, b)
#define lson l,mid,o << 1
#define rson mid + 1,r,o << 1 | 1
#define ls o << 1
#define rs o << 1 | 1
#define inf 0x3f3f3f3f
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef pair<int,int> pii;
inline bool isdigit(char& ch) {
return ch >= '0' && ch <= '9';
}
template<class T>
void read(T &x) {
x = 0;
ll f = 1;char ch = getchar();
for (;!isdigit(ch);ch = getchar())
if (ch == '-') f = -1;
for (; isdigit(ch);ch = getchar())
x = (x << 1) + (x << 3) + ch - '0';
x *= f;
}
template<class T>
inline void write(T x) {
if (x == 0) {putchar('0');return ;}
if (x < 0) {putchar('-');x = -x;}
int _stk[65],_top = 0;
for (;x;x /= 10) _stk[++_top] = x % 10 + 48;
for (;_top;_top--)putchar(_stk[_top]);
}
int main () {
int x, y;
cin >> x >> y;
bool f = false;
rep(i, 0, x + 1) {
int h = 2 * i + 4 * (x - i);
if (h == y) {
f = true;
break;
}
}
if (f)
cout << "Yes";
else
cout << "No";
return 0;
}
