#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;
long long mod = 1e9 + 7;
void solve() {
float n;
cin >> n;
float t1 = n;
float t = sqrtf(1 + 8 * n);
float ans = t - 1;
ans = ans / 2;
ans = ceil(ans);
if(((ans * (ans + 1)) / 2) < t1) {
ans++;
}
cout << ans << "\n";
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
return 0;
}
