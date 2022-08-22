#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
int j = x - i;
if (2 * i + 4 * j == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
