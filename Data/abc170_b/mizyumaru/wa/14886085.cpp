#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (6 * i - 4 == Y) {
cout << "Yes" << endl;
break;
}
else if (i == X) {
cout << "No" << endl;
}
}
}
