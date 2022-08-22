#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < n; i++)
int main() {
int n;
cin >> n;
int d = 6, x = 1e5;
while (true) {
if (n / x > 0) {
break;
} else {
x /= 10;
d--;
}
}
int ans;
if (d == 1) ans = n;
else if (d == 2) ans = 9;
else if (d == 3) ans = 9 + (n - 100 + 1);
else if (d == 4) ans = 909;
else if (d == 5) ans = 9 + 900 + (n - 10000 + 1);
else if (d == 6) ans = 90909;
cout << ans << endl;
return 0;
}
