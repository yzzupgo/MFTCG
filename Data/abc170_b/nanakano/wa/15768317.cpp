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
int kame, res;
for (int turu=1; turu<=X; turu++){
kame = X - turu;
res = 2 * turu + 4 * kame;
if (res == Y) can = true;
}
if (can) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
