#include <bits/stdc++.h>
#define int long long
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
using namespace std;
signed main() {
cin.tie(0);
ios_base::sync_with_stdio(false);
int n, l; cin >> n >> l;
int sum = 0;
for (int i = 1; i <= n; i++) {
sum += l - i + 1;
}
int mn = 10000000000;
for (int i = 1; i <= n; i++) {
mn = min(mn, abs(l-i+1));
}
cout << mn << endl;
return 0;
}
