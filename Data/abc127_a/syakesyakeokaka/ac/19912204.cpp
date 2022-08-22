#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <limits>
#include <list>
#include <queue>
#include <tuple>
#include <map>
#include <stack>
#include <set>
#include <numeric>
#include <bitset>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) {
cout << b;
}
else if (a >= 6) {
cout << b/2;
}
else {
cout << 0;
}
}
