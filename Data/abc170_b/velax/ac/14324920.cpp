#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y,n,m;
cin >> X >> Y;
if (Y % 2 == 1) {
cout << "No" << endl;
return 0;
}
n = Y / 4;
m = Y / 2;
for (int i = 0; i < m; i++) {
if (4 * n + 2 * (X - n) == Y) {
cout << "Yes" << endl;
return 0;
}
if (i % 2 == 0) {
X--;
}
if (i % 2 == 1) {
X++;
n--;
}
}
cout << "No" << endl;
}
