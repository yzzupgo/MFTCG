#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << "; "<< x << endl
int main() {
int X, Y;
cin >> X >> Y;
if (Y <= 4 * X && Y >= 2 * X && (Y % 4 == 0 || Y % 4 == 2)) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
