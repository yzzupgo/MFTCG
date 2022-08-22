#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int turu = (Y - (2 * X)) / 2;
if (turu <= X && 0 <= turu) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
