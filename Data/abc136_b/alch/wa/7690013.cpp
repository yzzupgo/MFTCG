#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int ans = 0;
if (n < 10) {
ans = (n % 10);
} else if (n < 1000) {
ans += max(n - 99, 0) + 9;
} else if (n <= 100000) {
ans += max(n - 9999, 0) + 909;
}
cout << ans << endl;
return 0;
}
