#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x, cin >> y;
for (int i = 1; i < x + 1; i++) {
if ((2 * i) + (4 * (x - i)) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
