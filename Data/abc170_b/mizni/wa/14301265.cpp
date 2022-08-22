#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
int main() {
int x, y;
cin >> x >> y;
if (2 * x <= y && 4 * x >= y) {
for (int i = 1; i <= x; i++) {
if (2 * i + 4 * (x - i) == y) {
cout << "Yes" << endl;
break;
}
}
} else {
cout << "No" << endl;
}
}
