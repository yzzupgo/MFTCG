#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X;
cin >> Y;
bool ok = false;
for (int i = 0; i <= X; i++) {
int turu = i;
int kame = (X - i);
if (turu * 2 + kame + 4 == Y) {
ok = true;
break;
}
}
if (ok) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
