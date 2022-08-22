#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ar array
int main() {
ios::sync_with_stdio(0); cin.tie(0);
int x, y;
cin >> x >> y;
for (int a = 0; a <= x; a++) {
int b = x - a;
if (2 * a + 4 * b == y) {
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
}
