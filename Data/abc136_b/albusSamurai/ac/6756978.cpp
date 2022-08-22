#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
#define MOD 1000000007
using namespace std;
signed main() {
int N; cin >> N;
int ans = 0;
for (int i = 1; i <= N; i++) {
if (i == 10) {
i = 99;
continue;
} else if (i == 1000) {
i = 9999;
continue;
} else if (i == 100000) {
continue;
}
ans++;
}
cout << ans << endl;
}
