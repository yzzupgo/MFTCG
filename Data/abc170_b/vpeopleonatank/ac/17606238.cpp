#include <bits/stdc++.h>
using namespace std;
void solve() {
int x, y;
cin >> x >> y;
if (x == 0 || y == 0) {
cout << "No";
return;
}
for (int i = 0; i <= x; i++) {
int j = x - i;
if (2 * i + 4 * j == y) {
cout << "Yes";
return;
}
}
cout << "No";
}
int main() { solve(); }
