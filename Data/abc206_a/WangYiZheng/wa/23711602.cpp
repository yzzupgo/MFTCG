#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 5;
ll a[N][2];
signed main() {
ll n, x, end = 1;
ll ans = 0;
scanf("%lld", &n);
for(ll i = 1; i <= n; i++) {
scanf("%lld", &x);
for(ll j = 1; j < end; j++) {
if(a[j][1] == x) {
++a[j][2];
ans += i - a[j][2];
goto M1;
}
}
a[end][1] = x, a[end][2] = 1;
++end, ans += i - 1;
M1:
;
}
cout << ans << endl;
return 0;
}
