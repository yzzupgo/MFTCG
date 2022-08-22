#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) cout << b << endl;
if (a <= 12 && a >= 6) cout << b / 2 << endl;
else cout << 0 << endl;
}
