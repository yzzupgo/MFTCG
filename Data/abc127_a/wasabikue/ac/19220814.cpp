#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a > 12) cout << b << endl;
if (a >= 6 && a <= 12) cout << b / 2 << endl;
if (a < 6) cout << 0 << endl;
}
