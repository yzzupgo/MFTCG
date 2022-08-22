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
if ((y % 2 == 0) & (a > 0)) {
printf("%s", "Yes");
} else {
printf("%s", "No");
}
return 0;
}
