#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
int main() {
int x, y;
cin >> x >> y;
int ans = 0;
for (int i = 1; i <= x; i++) {
if (2 * i + 4 * (x - i) == y ||
4 * i + 2 * (x - i) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
