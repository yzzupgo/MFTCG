#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n; cin >> n;
string s = to_string(n);
int ans = 0;
for (int i = 1; i < (int)s.size(); i += 2) ans += 9 * (int)pow(10, i-1);
if (n % 2 == 1) ans += n - ((int)pow(10, (int)s.size()-1) - 1);
cout << ans << endl;
return 0;
}
