#include <bits/stdc++.h>
using namespace std;
signed main() {
int a, b; scanf ("%d %d", &a, &b);
int mn = a * 2, mx = a * 4;
if (mn <= b && mx >= b && b % 2 == 0) puts ("YES");
else puts ("NO");
}
