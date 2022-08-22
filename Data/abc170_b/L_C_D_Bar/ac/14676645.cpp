#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <iomanip>
#include <cstdio>
#include <new>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
bool flag = false;
for (int i = 0; i <= X; ++i) {
if (i * 2 + (X - i) * 4 == Y) flag = true;
}
if (flag) cout << "Yes" << endl;
else cout << "No" << endl;
}
