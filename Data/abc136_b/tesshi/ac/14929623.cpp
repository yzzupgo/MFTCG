#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cmath>
#include<math.h>
using namespace std;
int main() {
int n, ans = 0;
cin >> n;
for (int i = 1; i <= n; i++) {
if (0 <= i && i <= 9)ans++;
else if (100 <= i && i <= 999)ans++;
else if (10000 <= i && i <= 99999)ans++;
}
cout << ans << endl;
}
