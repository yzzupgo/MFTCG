#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y, C;
cin >> X >> Y;
C = 0;
for (int i = 0; i < X; i++) {
if (2 * (X - i) + 4 * (i) == Y) {
cout << "Yes";
C = C + 1;
break;
}
}
if (C == 0) {
cout << "No";
}
}
