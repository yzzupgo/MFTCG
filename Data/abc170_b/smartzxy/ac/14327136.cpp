#include <algorithm>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
typedef long long ll;
ll x, y;
int main() {
cin >> x >> y;
ll b = (y - 2 * x) / 2;
ll a = (x * 4 - y) / 2;
if (a * 2 + b * 4 == y && a >= 0 && b >= 0) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
