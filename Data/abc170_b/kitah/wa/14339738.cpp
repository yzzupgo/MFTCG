#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
int turu = 0, kame = 0;
kame = y / 2 - x;
turu = x - kame;
if (turu < 0 || kame < 0) {
cout << "No" << endl;
}
if (turu + kame == x) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
