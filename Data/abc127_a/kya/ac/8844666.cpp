#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b, ans = 0;
cin >> a >> b;
if (13 <= a) ans = b;
else if (6 <= a) ans = b/2;
cout << ans << endl;
return 0;
}
