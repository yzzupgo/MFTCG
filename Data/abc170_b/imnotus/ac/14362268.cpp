#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y; cin >> X >> Y;
if (Y % 2 == 0) {
int A = Y / 2 - X;
int B = 2 * X - Y / 2;
if (A >= 0 && B >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
} else cout << "No" << endl;
}
