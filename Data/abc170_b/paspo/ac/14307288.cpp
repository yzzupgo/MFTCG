#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int turu = (Y - (2 * X)) / 2;
if (0 > turu || turu > X) {
cout << "No" << endl;
}
else {
if ((4 * turu + 2 * (X - turu)) == Y) {
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
}
