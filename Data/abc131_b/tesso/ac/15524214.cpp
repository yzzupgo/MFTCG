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
ll diff = INF;
ll ans = 0;
repi(i, n, 0) {
if(diff > abs(total - (total - (l + i)))){
ans = total - (l + i);
diff = abs(total - (total - (l + i)));
}
}
cout << ans << endl;
return 0;
}
