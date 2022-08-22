#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= x; i++) {
int t = x - i;
int f = i * 2 + t * 4;
if (f == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
