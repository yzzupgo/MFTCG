#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
#include <stdio.h>
#include <stack>
#include <queue>
#include <cstdio>
#include <cmath>
#include <iterator>
#include <map>
#include <fstream>
#include <list>
#include <iomanip>
#include <cctype>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
if (a >= 13) {
cout << b << endl;
}
else if (6 <= a && a <= 12) {
cout << b / 2 << endl;
}
else {
cout << 0 << endl;
}
}
