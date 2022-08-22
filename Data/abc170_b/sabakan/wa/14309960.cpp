#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <numeric>
#include <string>
#include <cmath>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int x, y;
int amari;
int max;
cin >> x >> y;
amari = y % 2;
if (amari >= 1) { cout << "No"; return 0; }
if (x == 1 and (y == 2 or y == 4)) { cout << "Yes"; return 0; }
max = x * 4;
if (x >= 2 and max >= y) {
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
