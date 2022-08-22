#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y; cin >> X >> Y;
int A, B;
A = Y / 2 - X;
B = 2 * X - Y / 2;
if (A >= 0 && B >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
