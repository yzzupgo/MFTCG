#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
int n;
cin >> n;
if (n < 10) cout << n << endl;
else if (10 <= n && n < 100) cout << 9 << endl;
else if (100 <= n && n < 1000) cout << 9 + n - 99 << endl;
else if (1000 <= n && n < 10000) cout << 9 + 900 + n - 999 << endl;
else if (n == 100000) cout << 90909 << endl;
return 0;
}
