#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y; cin >> X >> Y;
if (Y > 4 * X) {
cout << "No" << endl;
} else {
if (Y % 4 == 0 || Y % 2 == 0) {
cout << "Yes" << endl;
}
}
}
