#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int main() {
int n; cin >> n;
int ans;
if (10 <= n && n <= 99) {
ans = 9;
} else if (1000 <= n && n <= 9999) {
ans = 909;
} else if (100000 == n) {
ans = 90909;
} else if (1 <= n && n <= 9) {
ans = n;
} else if (100 <= n && n <= 999) {
ans = n - 90;
} else if (10000 <= n && n <= 99999) {
ans = n - 8990;
}
cout << ans << endl;
return 0;
}
