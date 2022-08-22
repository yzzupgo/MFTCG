#include <bits/stdc++.h>
using namespace std;
template<class T>
inline T read(T &a){
register T x = 0, flag = 1;
register char ch;
while (!isdigit(ch = getchar())) if (ch == '-') flag = -1;
while (x = x * 10 + (ch & 15), isdigit(ch = getchar()));
return a = x * flag;
}
template <class T>
inline void write(T x){
if (x < 0)
putchar('-'), x = -x;
if(x >= 10) write(x / 10);
putchar(x % 10 + '0');
}
template<class T> inline bool Chkmax(T& x, const T& y) { return x < y ? x = y, true : false; }
template<class T> inline bool Chkmin(T& x, const T& y) { return x > y ? x = y, true : false; }
#define For(i,x,y) for (int i = (x); i <= (y); i++)
#define Rep(i,x,y) for (int i = (x); i >= (y); i--)
int a, b, c;
int main() {
read(a); read(b);
int X = (b - 2 * a) / 2;
int Y = a - X;
if (X < 0 || Y < 0) {
cout << "No" << endl; return 0;
}
if (4 * X + 2 * Y == b) {
cout << "Yes" << endl;
}
else cout << "No" << endl;
}
