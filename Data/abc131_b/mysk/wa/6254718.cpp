#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <math.h>
#include <iomanip>
using namespace std;
int abs(int n) {
if (n < 0) {
return -n;
}
return n;
}
int main() {
int n, l;
cin >> n >> l;
int sum;
int minabs = 999999;
int ex;
for (int i = 1; i <= n; i++) {
sum += l + i - 1;
if (abs(l+i-1) < minabs) {
ex = l+i-1;
}
minabs = min(minabs, abs(l+i-1));
}
cout << sum - ex -1 << endl;
}
