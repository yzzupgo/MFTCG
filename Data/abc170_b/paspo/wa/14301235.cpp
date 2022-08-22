#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
int turu = (Y - (2 * X)) / 2;
if (turu <= X) cout << "Yes" << endl;
if (turu > X) cout << "No" << endl;
}
