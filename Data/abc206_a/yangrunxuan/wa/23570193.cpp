#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
inline int read() {
register int r = 0, f = 1;
register char ch = getchar();
while(ch < '0' || ch > '9') {
if(ch == '-') {
f = -1;
}
ch = getchar();
}
while(ch >= '0' && ch <= '9') {
r = (r << 1) + (r << 3) + (ch ^ 48);
ch = getchar();
}
return r * f;
}
int n, m;
int a, b, c;
int d[maxn];
int main() {
n = read();
int ans = n * 1.08;
if(ans > 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else if(ans < 206) {
cout << ":(" << endl;
}
return 0;
}
