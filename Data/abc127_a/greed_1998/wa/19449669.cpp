#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
const ll MOD = 998244353;
int main() {
ll a, b;
cin >> a >> b;
if (a >= 6 && a <= 12) cout << b/2 << endl;
else if (a >= 13) cout << b << endl;
else 0;
return 0;
}
