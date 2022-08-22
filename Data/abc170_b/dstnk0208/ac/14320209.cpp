#include <bits/stdc++.h>
#define rep(i,n) for (long long i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int x, y, a, b;
cin >> x >> y;
a = 2 * x - y / 2;
b = y / 2 - x;
if (a >= 0 & b >= 0) {
if ((x == a + b) & (y == a * 2 + b * 4)) {
printf("%s\n", "Yes");
} else {
printf("%s\n", "No");
}
} else {
printf("%s\n", "No");
}
return 0;
}
