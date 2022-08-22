#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
const int INF = 1001001001;
const int MOD = 1000000007;
int main() {
int x, y;
cin >> x >> y;
bool ok = false;
for (int i=0; i<=x; ++i) {
if (i*2 + (x-i)*4 == y) ok = true;
}
string ans;
if (ok) ans = "Yes";
else ans = "No";
cout << ans << endl;
return 0;
}
