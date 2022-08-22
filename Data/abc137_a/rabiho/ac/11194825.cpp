#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <numeric>
#include <set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
int main() {
int a, b;
cin >> a >> b;
int plus = a + b;
int minus = a - b;
int multi = a * b;
int ans = max({ plus, minus, multi });
cout << ans << endl;
return 0;
}
