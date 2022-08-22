#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 0; i < x + 1; i++) {
if (i*2+(x-i)*4 == y) {
cout << "Yes" << endl;
break;
}
else if (i == x) {
cout << "No" << endl;
break;
}
}
}
