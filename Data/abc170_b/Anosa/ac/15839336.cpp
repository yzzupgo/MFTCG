#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define MOD 1000000007
using namespace std;
using ll = long long;
int main() {
ll x, y;
string ans = "No";
cin >> x >> y;
rep(i,x + 1) {
ll n = i * 2 + 4 * (x - i);
if (n == y) ans = "Yes";
}
cout << ans << endl;
return 0;
}
