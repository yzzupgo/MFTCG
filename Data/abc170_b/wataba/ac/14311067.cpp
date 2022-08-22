#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y; cin >> x >> y;
bool exist = false;
for (int i = 0; i <= x; i++) {
if (2*i + 4*(x - i) == y) exist = true;
}
if (exist) cout << "Yes" << endl;
else cout << "No" << endl;
}
