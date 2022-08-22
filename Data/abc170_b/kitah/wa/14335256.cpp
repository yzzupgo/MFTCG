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
if (turu + kame == x && turu > 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
