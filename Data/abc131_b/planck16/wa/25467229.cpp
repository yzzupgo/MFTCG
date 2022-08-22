#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const int inf = INT_MAX;
const int mod = 1000000007;
int main() {
int n, l;
cin >> n >> l;
int mn = inf;
int ans = 0;
rep(i, n) {
int taste = l + i;
mn = min(mn, abs(taste));
ans += taste;
}
ans -= mn;
cout << ans << endl;
return 0;
}
