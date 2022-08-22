#include<bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
if (Y % 2 == 1) {
cout << "No" << endl;
return 0;
}
if (X * 4 < Y) {
cout << "No" << endl;
return 0;
}
int turu = 0;
int kame = 0;
for (int i = 0; i <= X; i++) {
int number = 4 * i + 2 * (X - i);
if (number == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
