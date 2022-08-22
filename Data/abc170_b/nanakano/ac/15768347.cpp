#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
if (Y % 2 != 0) {cout << "No" << endl; return 0;}
bool can = false;
int kame, reg;
for (int turu=0; turu<=X; turu++){
kame = X - turu;
reg = (2 * turu) + (4 * kame);
if (reg == Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
