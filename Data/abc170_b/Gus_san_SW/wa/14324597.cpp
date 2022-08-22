#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y, Z, C = 2;
cin >> X;
cin >> Y;
Z = (4 * X);
if (Z > Y){
C = (Z - Y) % 2;
}
if (C == 0){
cout << "Yes" << endl;
}
else if (C > 1){
cout << "NO" << endl;
}
}
