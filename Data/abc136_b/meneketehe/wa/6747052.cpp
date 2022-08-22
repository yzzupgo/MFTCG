#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int ans = 0;
cin >> n;
int cur = 1;
while (cur < n) {
ans += min(cur * 9, n - cur + 1);
cur *= 100;
}
cout << ans << '\n';
return 0;
}
