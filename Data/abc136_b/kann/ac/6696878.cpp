#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <numeric>
#include <cmath>
#include <limits>
#include <bitset>
#include <iterator>
#include <map>
#include <queue>
#include <set>
using namespace std;
int main()
{
int n, cnt = 0, sum = 0,digit=0;
cin >> n;
for (int i = 0;; i++) {
if (pow(10, i) <= n)digit++;
else { break; }
}
for (int i = 1; i <= digit; i++) {
if (i % 2 == 0)continue;
else {
if (pow(10,i)>n) {
sum += n - pow(10, i - 1) + 1;
}
else {
sum += 9 * pow(10, cnt);
cnt+=2;
}
}
}
cout << sum << endl;
}
