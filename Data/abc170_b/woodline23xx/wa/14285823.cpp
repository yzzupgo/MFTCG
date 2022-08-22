#include <bits/stdc++.h>
#define Int int64_t
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i <= 1000; ++i) {
int n = i * 2 + (x - i) * 4;
if (n == y) {
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
return 0;
}
