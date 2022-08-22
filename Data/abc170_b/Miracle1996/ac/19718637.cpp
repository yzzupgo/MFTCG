#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using pii = pair<int, int>;
const int N = 1;
int n, m, a[N];
bool solve(void)
{
return (0 == (m & 1)) && (2 * n <= m && m <= 4 * n);
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
