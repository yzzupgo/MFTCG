#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = 1; i < x; i++) {
if (i*2+(x-i)*4 == y) {
cout << "Yes" << endl;
break;
}
else if (i == x-1) {
cout << "No" << endl;
break;
}
}
}
