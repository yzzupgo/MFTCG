#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for (int n = 1; n <= X; n++) {
if (2 * n + 4 * (X - n) == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
