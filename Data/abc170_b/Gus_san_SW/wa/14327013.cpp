#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y, Z, C;
cin >> X;
cin >> Y;
Z = (4 * X);
C = 2;
if (Z > Y){
C = (Z - Y) % 2;
}
if (C == 0){
cout << "Yes" << endl;
}
else if (C > 1){
cout << "No" << endl;
}
}
