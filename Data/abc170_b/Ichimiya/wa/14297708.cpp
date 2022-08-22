#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool b = false;
for (int i = 1; i <= X; i++) {
int n = 2 * i + 4 * (X-i);
if (n == Y) b = true;
}
cout << (b ? "Yes" : "No") << endl;
}
