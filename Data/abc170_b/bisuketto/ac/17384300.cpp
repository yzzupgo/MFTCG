#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;
using ll = long long;
int main() {
int X, Y;
cin >> X >> Y;
bool can = false;
for (int i = 0; i <= X; i++) {
for (int j = 0; j <= X; j++) {
if (i + j == X && (i * 2) + (4 * j) == Y) can = true;
if (can) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
