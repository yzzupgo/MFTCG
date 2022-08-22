#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (i * 4 + (X - i) * 2 == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
