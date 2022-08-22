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
ll t = ((y / x + 1) * 4 - y) / 2;
if (t * 2 + (x - t) * 4 == y || x * 2 == y || x * 4 == y) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}
