#include <iostream>
#include <iomanip>
#include <algorithm>
typedef long long ll;
using namespace std;
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
#define repi(i,n,init) for(ll i=init;i<(n);i++)
int main() {
int n, l;
cin >> n >> l;
ll total = 0;
repi(i, n, 0) {
total += l + i;
}
ll ans = INF;
repi(i, n, 0) {
ans = min(ans, abs(total - (total - (l + i))));
}
cout << ans << endl;
return 0;
}
