#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main() {
cin.tie(0); ios::sync_with_stdio(false);
int a, b;
cin >> a >> b;
if (13 <= a) cout << b << endl;
else if (6 <= a) cout << b / 2 << endl;
else cout << "0\n";
return 0;
}
