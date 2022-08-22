#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
int amari = Y - (X * 2);
if (X * 2 <= Y && amari % 2 == 0 && amari / 2 <= X) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
