#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (2 * i + 4 * (X - i) == Y) {
cout << "Yes" << endl;
break;
}
else if (i == X) {
cout << "No" << endl;
}
}
}
