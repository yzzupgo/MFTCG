#include <iostream>
#include <algorithm>
#include <typeinfo>
#include <numeric>
#include "math.h"
#include <string>
#include <vector>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
for (int i = x; i >= 0; i--) {
if (y == (4 * i) + (2 * (x-i))) {
cout << "Yes";
return 0;
}
}
cout << "No";
return 0;
}
