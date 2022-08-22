#include <iostream>
#include <string>
using namespace std;
int main() {
int n, ans = 0;
cin >> n;
int i;
for (i = 1; i <= n; i++) {
string s;
s = to_string(i);
if (s.length() % 2 == 1)
ans++;
}
cout << ans << endl;
return 0;
}
