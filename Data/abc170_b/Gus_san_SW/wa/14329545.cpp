#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y, Z, C;
cin >> X;
cin >> Y;
Z = (4 * X);
if (Z <= Y){
cout << "No" << endl;
return 0;
}
else{
C = (Z - Y) % 2;
}
if (C == 0){
cout << "Yes" << endl;
}
else if (C > 1){
cout << "No" << endl;
}
}
