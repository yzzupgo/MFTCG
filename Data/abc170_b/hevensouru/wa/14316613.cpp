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
for (int i = x; i > 0; i--) {
for (int j = 0; j < x; j++) {
if (y==(4*i)+(2*j)) {
cout<<"Yes";
return 0;
}
}
}
cout << "No";
return 0;
}
