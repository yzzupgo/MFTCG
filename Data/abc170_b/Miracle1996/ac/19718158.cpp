#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using pii = pair<int, int>;
const int N = 1;
int n, m, a[N];
bool solve(void)
{
for (int k = 0; k <= n; ++k) {
if ((2 * k + 4 * (n - k)) == m) return true;
}
return false;
}
signed main(int argc, char** argv)
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
#endif
while (cin >> n >> m) {
(solve()) ? puts("Yes") : puts("No");
}
return 0;
}
