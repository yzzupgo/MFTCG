#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n; cin >> n;
string s = to_string(n);
int len = s.size(), ans = 0;
for (int i = 1; i < len; i += 2) ans += 9 * (int)pow(10, i-1);
if (len % 2 == 1) ans += n + 1 - (int)pow(10, len-1);
cout << ans << endl;
return 0;
}
