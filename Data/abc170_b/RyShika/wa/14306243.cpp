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
int remainder = (4 * X) - Y;
turu = remainder / 2;
kame = X - turu;
cout << "Yes" << endl;
return 0;
}
